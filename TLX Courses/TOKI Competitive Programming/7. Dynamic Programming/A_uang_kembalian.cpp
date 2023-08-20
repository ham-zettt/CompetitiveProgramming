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
	int n, k;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cin >> k;
	int dp[k+1];
	dp[0] = 0;

	for(int i=1; i<=k; i++){
		int minn = 1e5;
		for(int j=0; j<n; j++){
			if(i >= arr[j]){
				minn = min(minn, dp[i-arr[j]] + 1);
			}
			dp[i] = minn;
		}
	}

	cout << dp[k];

}

// dp[i] = jumlah koin minimal yang bisa ditukar 