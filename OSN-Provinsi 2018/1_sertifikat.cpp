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
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	int n, maxx=0, ans=0;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
	}

	for(int i=0; i<n; i++){
		if(arr[i] == maxx) ans++;
	}

	cout << ans;
}