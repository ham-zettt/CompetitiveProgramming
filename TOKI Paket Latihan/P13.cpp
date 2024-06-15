#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }

int n, m;
vector<string> vt;

void dfs(int x, int y, int &total, bool (&visited)[][505]){	// parameter: koordinat bebek atau kucing
	if(visited[x][y]) return;	
	visited[x][y] = true;
	total++;

	if(x+1<m && vt[x+1][y]=='.') dfs(x+1, y, total, visited);
	if(y+1<n && vt[x][y+1]=='.') dfs(x, y+1, total, visited);
	if(x-1>=0 && vt[x-1][y]=='.') dfs(x-1, y, total, visited);
	if(y-1>=0 && vt[x][y-1]=='.') dfs(x, y-1, total, visited);
}

int main() {
	string s;
	int total_k=0, total_b = 0;
	bool visited_k[505][505], visited_b[505][505];
	pair<int,int> kucing, bebek;

	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> s;
		int find_k = s.find('K');
		int find_b = s.find('B');
		
		if(find_k != -1){
			kucing.first = i;
			kucing.second = find_k;
		}
		if(find_b != -1){
			bebek.first = i;
			bebek.second = find_b;
		}

		vt.pb(s);
		fill(visited_b[i], visited_b[i]+505, false);	// sekalian isi visited
		fill(visited_k[i], visited_k[i]+505, false);
	}

	dfs(kucing.first, kucing.second, total_k, visited_k);
	dfs(bebek.first, bebek.second, total_b, visited_b);

	if(total_k == total_b) cout << "SERI";
	else cout << ((total_k>total_b) ? "K" : "B") << " " << abs(total_k-total_b);
}