#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	int n;
	cin >> n;

	ll arr1[n], arr2[n];
	ll total1 = 0, total2 = 0, ans = 0;

	for(int i=0; i<n; i++){
		cin >> arr1[i];
		ans += arr1[i]*n;
	}
	for(int i=0; i<n; i++){
		cin >> arr2[i];
		total2 += arr2[i];
	}

	ans += total2*n;
	cout << ans;
}
