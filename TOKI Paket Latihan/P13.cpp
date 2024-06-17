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
bool visited[505][505];
char vt[505][505];

int dfs(int x, int y){	// parameter: koordinat bebek atau kucing
	visited[x][y] = true;
	int total = 0;

	if(vt[x+1][y]=='.' && !visited[x+1][y]) total += dfs(x+1, y) + 1;
	if(vt[x][y+1]=='.' && !visited[x][y+1]) total += dfs(x, y+1) + 1;
	if(vt[x-1][y]=='.' && !visited[x-1][y]) total += dfs(x-1, y) + 1;
	if(vt[x][y-1]=='.' && !visited[x][y-1]) total += dfs(x, y-1) + 1;

	return total;
}

int main() {
	int total_b, total_k;
	pair<int,int> kucing, bebek;
	string s;

	cin >> m >> n;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> vt[i][j];
			if(vt[i][j] == 'K') kucing = {i,j};
			if(vt[i][j] == 'B') bebek = {i,j};
		}
	}

	total_k = dfs(kucing.first, kucing.second) + 1;
	memset(visited, false, sizeof(visited));
	total_b = dfs(bebek.first, bebek.second) + 1;

	if(total_k == total_b) cout << "SERI";
	else cout << ((total_k>total_b) ? "K" : "B") << " " << abs(total_k-total_b);
}