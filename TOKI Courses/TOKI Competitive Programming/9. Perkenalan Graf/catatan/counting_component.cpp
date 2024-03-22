#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <queue>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

// PROGRAM
// menghitung banyaknya graph component

// Pake graph2

int main(){
	int n=5, ans=0;
	int adj[n+1][n+1] = {0};
	adj[1][3] = 1;
	adj[1][4] = 1;
	adj[3][4] = 1;
	adj[2][5] = 1;

	queue<int> qu;
	bool visited[n+1];
	fill(visited, visited+n+1, false);

	for(int i=1; i<n+1; i++){
		
		if(!visited[i]){
			ans++;
			qu.push(i);
			visited[i] = true;

			while(!qu.empty()){
				int current = qu.front();
				cout << current << endl;
				qu.pop();

				for(int i=1; i<n+1; i++){
					if((adj[current][i] || adj[i][current]) && !visited[i]){
						qu.push(i);
						visited[i] = true;
					}
				}
			}
		}

	}

	cout << "component:" << ans;
}