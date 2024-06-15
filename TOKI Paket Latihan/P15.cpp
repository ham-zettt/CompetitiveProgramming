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
	ll n, m, total, ans=LLONG_MIN;
	cin >> n >> m;

	ll arr[n], ps[n+1];
	ps[0] = 0;
	
	// prefix sum
	for(int i=1; i<=n; i++){
		cin >> arr[i-1];
		ps[i] = ps[i-1] + arr[i-1];
	}

	for(int i=1; i<=n-m+1; i++){
		ans = max(ans, ps[i+m-1] - ps[i-1]);
	}

	cout << ans;
}