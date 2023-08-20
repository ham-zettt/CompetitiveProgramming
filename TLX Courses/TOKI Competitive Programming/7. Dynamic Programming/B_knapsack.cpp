#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
	int n, k, a, b;
	cin >> n >> k;

	vector<pair<int,int>> vt;	// berat - harga
	for(int i=0; i<k; i++){
		cin >> a >> b;
		vt.pb(mp(a, b));
	}

	int dp[k+1][n+1]; 
	bool choice[k+1][n+1];

	// fill base case
	for(int i=0; i<=k; i++){
		dp[i][0] = 0;
		choice[i][0] = 0;
	}
	for(int i=0; i<=n; i++){
		dp[0][i] = 0;
		choice[0][i] = 0;
	}

	int ambil, notAmbil;
	for(int i=1; i<=k; i++){
		ambil = 0;
		notAmbil = 0;
		for(int j=1; j<=n; j++){
			if(j >= vt[i-1].first){
				ambil = dp[i-1][j-vt[i-1].first] + vt[i-1].second;
			}
			notAmbil = dp[i-1][j];

			dp[i][j] = max(ambil, notAmbil);
			if(ambil > notAmbil) choice[i][j] = 1;
			else choice[i][j] = 0;
		}
	}

	EACH2d(choice);
	vector<int> ans;
	int i=k, j=n;
	while(i>=0 && j>=0){
		if(choice[i][j] == 1){
			ans.pb(i);
			j -= vt[i-1].first;
			i -= 1;
		} else {
			i -= 1;
		}
	}

	for(int i=ans.size()-1; i>=0; i--) cout << ans[i] << endl;
}