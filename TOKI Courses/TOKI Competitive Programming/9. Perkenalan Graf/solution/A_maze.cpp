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

int n, m, a ,b;
int arr[101][101], visited[101][101];

int main(){
	cin >> n >> m;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> arr[i][j];
			visited[i][j] = 0;
		}
	}

	cin >> a >> b;
	
	queue<pair<pair<int,int>, int>> qu;
	visited[a][b] = 1;
	qu.push({{a,b}, 1});

	while(!qu.empty()){
		pair<pair<int,int>, int> current = qu.front();
		qu.pop();

		visited[current.first.first][current.first.second] = 1;

		if(current.first.first==1 || current.first.first==n || current.first.second==1 || current.first.second==m){
			cout << current.second;
			break;
		} if(arr[current.first.first-1][current.first.second]==0 && !visited[current.first.first-1][current.first.second]){
			qu.push({{current.first.first-1, current.first.second}, current.second+1});
		} if(arr[current.first.first][current.first.second+1]==0 && !visited[current.first.first][current.first.second+1]){
			qu.push({{current.first.first, current.first.second+1}, current.second+1});
		} if(arr[current.first.first+1][current.first.second]==0 && !visited[current.first.first+1][current.first.second]){
			qu.push({{current.first.first+1, current.first.second}, current.second+1});
		} if(arr[current.first.first][current.first.second-1]==0 && !visited[current.first.first][current.first.second-1]){
			qu.push({{current.first.first, current.first.second-1}, current.second+1});
		}  
	}	
}
