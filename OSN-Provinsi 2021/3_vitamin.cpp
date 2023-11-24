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

bool sort_args(vector<int> &v1, vector<int> &v2){
	return v1[2] < v2[2];
}

int main(){
	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr;
	int a, b, c;
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		vector<int> temp = {a,b,c};
		arr.pb(temp);
	}

	sort(arr.begin(), arr.end(), sort_args);	

	int dp[n][m+1];
	for(int i=0; i<n; i++) dp[i][0] = 0;

	int ambil, notAmbil;
	for(int i=0; i<n; i++){
		ambil = 0;
		notAmbil = 0;
		for(int j=1; j<=m; j++){
			if(i==0){
				if(j >= arr[i][0]){	// ambil
					if(arr[i][2] == 1) dp[i][j] = arr[i][1];	// dosis tinggi
					else dp[i][j] = j/arr[i][0];				// dosis rendah
				} else {	// tidak ambil
					dp[i][j] = 0;
				}

			} else {
				if(j >= arr[i][0]){	// ambil
					if(arr[i][2] == 1){
						ambil = dp[i-1][j - arr[i][0]] + arr[i][1];
					} else {
						ambil = dp[i][j - arr[i][0]] + arr[i][1];
					}
				}

				notAmbil = dp[i-1][j];	// tidak ambil
				dp[i][j] = max(ambil, notAmbil);
			}
		}
	}

	cout << dp[n-1][m+1-1];
}


// dp[i][j] = jumlah kandungan maksimal

// dosis-tinggi
// ambil = dp[i-1][j-berat] + kandungan
// notAmbil = dp[i-1][j]

// dosis-rendah
// ambil = dp[i][j-berat] + kandungan
// notAmbil = dp[i-1][j] 