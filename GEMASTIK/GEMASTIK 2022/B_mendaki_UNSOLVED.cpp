#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int INF = INT_MAX;

void displayPriorityQueue(priority_queue< array<int,2>, vector<array<int,2>>, greater<array<int,2>> > &pq){
	priority_queue< array<int,2>, vector<array<int,2>>, greater<array<int,2>> > temp = pq;
	cout << "priority queue: ";
	while(!temp.empty()){
		cout << "{" << temp.top()[0] << "," << temp.top()[1] << "} ";
		temp.pop();
	}
	cout << endl;
}

void displaySortestPath(int arr[], int &n){
	cout << "sortest path: ";
	for(int i=1; i<=n; i++) cout << arr[i] << " ";
	cout << endl << endl;
}

void displayPreviousNode(int arr[], int &n){
	cout << "previous node: ";
	for(int i=1; i<=n; i++) cout << arr[i] << " ";
	cout << endl << endl;
}

void displayPreviousDistance(int arr[], int &n){
	cout << "previous distance: ";
	for(int i=1; i<=n; i++) cout << arr[i] << " ";
	cout << endl << endl;
}


int main(){
	int n, m;
	cin >> n >> m;

	int h[n+1], x[n+1][n+1];
	bool jalur[n+1][n+1];

	// input tinggi
	for(int i=1; i<=n; i++){
		cin >> h[i];
	}

	// fill false
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			jalur[i][j] = false;
		}
	}

	// input matrix
	int a, b;
	for(int i=0; i<m; i++){
		cin >> a >> b;
		jalur[a][b] = true;
		jalur[b][a] = true;
	}

	// input tingkat kelelahan (x)
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(jalur[i][j]){
				x[i][j] = abs(h[i]-h[j]);
			} else {
				x[i][j] = 0;	
			}
		}
	}

	
	cout << "path: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << jalur[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "kelelahan: " << endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;




	// Dijkstra Algorithm
	priority_queue< array<int,2>, vector<array<int,2>>, greater<array<int,2>> > pq;	// [distance][node]

	bool visited[n+1];	// sudah belum dikunjungi
	int distance[n+1];	// sortest path dari titik awal
	int previousNode[n+1];
	int previousDistance[n+1];

	for(int i=1; i<=n; i++){
		visited[i] = false;
		previousNode[i] = 0;
		distance[i] = INF;	// isi dengan int tertinggi
	}

	previousNode[1] = 1;
	previousDistance[1] = 0;
	distance[1] = 0;
	pq.push({0,1});

	while(!pq.empty()){
	
		int currentDistance = pq.top()[0];
		int currentNode = pq.top()[1];

		cout << "currentNode: " << currentNode << endl;
		cout << "currentDistance: " << currentDistance << endl;

		pq.pop();
		visited[currentNode] = true;

		for(int i=1; i<=n; i++){
			if(jalur[currentNode][i] && !visited[i]){
				// cout << currentDistance << " + " << x[currentNode][i] << " < " << distance[i] << " ? ";
				cout << "-- Cek node " << currentNode << "-" << i << " , Distance: " << currentDistance+x[currentNode][i];
				if(currentDistance + x[currentNode][i] < distance[i]){
					cout << " (Update & Push)" << endl;
					previousNode[i] = currentNode;
					distance[i] = currentDistance + x[currentNode][i];
					previousDistance[i] = distance[i];
					pq.push({distance[i],i});
				} else {
					cout << endl;
				}
			}
		}

		displayPriorityQueue(pq);
		displaySortestPath(distance, n);
	}

	displayPreviousNode(previousNode, n);
	displayPreviousDistance(previousDistance, n);

	//display path
	for(int i=1; i<=n; i++){
		int current = i;
		vector<pair<int,int>> vt;	// node, distance
		vt.push_back(make_pair(i, h[current]));

		cout << "Path 1-" << i << " : ";
		while(current > 1){
			vt.push_back(make_pair(previousNode[current], h[previousNode[current]]));
			current = previousNode[current];
		}

		reverse(vt.begin(), vt.end());
		if(vt.size() == 2){
			vt[0].second = vt[1].second;

		} else if(vt.size() > 2){
			int maxx = 0;
			int idx;
			
			for(int i=1; i<vt.size(); i++){
				// maxx = min(maxx, vt[i].second - vt[i-1].second);

				if(abs(vt[i].second - vt[i-1].second) > maxx){
					maxx = abs(vt[i].second - vt[i-1].second);
					idx = i;
				}
			}

			// 10 5 2
			// 5  5 2

			if(idx == 0){
				vt[idx].second = vt[idx+1].second;
			} else if(idx == vt.size()-1){
				vt[idx].second = vt[idx-1].second;
			} else {
				vt[idx-1].second = vt[idx].second;
			}
		}

		int distanceTotal = 0;
		for(int i=0; i<vt.size(); i++){
			cout << "{" << vt[i].first << ", " << vt[i].second << "} -> ";	// node, distance
			if(i != 0){
				distanceTotal += abs(vt[i].second - vt[i-1].second);
			}
		}

		cout << "distance total: " << distanceTotal << endl;
		cout << endl;
	}
}

4 9 2 6 10 15 9