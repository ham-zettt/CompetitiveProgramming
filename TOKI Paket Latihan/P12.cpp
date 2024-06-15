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

int main() {
	int t, m, n, x, y;
	string s;
	cin >> t;

	while(t--){
		vector<string> vt;
		queue<pair<int,int>> q;

		cin >> n >> m;
		cin.ignore();	// skip newline

		for(int i=0; i<m; i++){
			getline(cin, s);
			vt.pb(s);
		}

		// cek bagian atas, kanan, bawah, kiri apakah ada yg bolong
		for(int i=0; i<n; i++) if(vt[0][i] == ' ') q.push({0,i});
		for(int i=0; i<n; i++) if(vt[i][n-1] == ' ') q.push({i,n-1});
		for(int i=0; i<n; i++) if(vt[m-1][i] == ' ') q.push({m-1,i});
		for(int i=0; i<n; i++) if(vt[i][0] == ' ') q.push({i,0});

		if(q.empty()){
			cout << "YA" << endl;
		} else {
			// bfs
			while(!q.empty()){
				pair<int,int> current = q.front();
				q.pop();
				x = current.first;
				y = current.second;
				vt[x][y] = '#';

				if(x-1>=0 && vt[x-1][y]==' ') q.push({x-1,y});
				if(y+1<n  && vt[x][y+1]==' ') q.push({x,y+1});
				if(x+1<m  && vt[x+1][y]==' ') q.push({x+1,y});
				if(y-1>=0 && vt[x][y-1]==' ') q.push({x,y-1});
			}
			
			bool isBanjir = true;
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(vt[i][j] == ' '){
						isBanjir = false;
						goto flag;
					}
				}
			}
			flag:
			cout << (isBanjir ? "TIDAK" : "YA") << endl;
	 	}


 	}
}