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
	int n, a, b, c, maxA, maxB, maxC;
	cin >> n;

	int dp[n+1];
	dp[0] = 0;

	for(int i=1; i<=n; i++){
		a = floor(i/2);
		b = floor(i/3);
		c = floor(i/4);

		maxA = max(a, dp[a]);
		maxB = max(b, dp[b]);
		maxC = max(c, dp[c]);
		dp[i] = max(maxA+maxB+maxC, i);	//cek juga saat emas tidak ditukar
	}

	cout << dp[n];
}

// dp[i] = penukaran maksimal saat berat emas n