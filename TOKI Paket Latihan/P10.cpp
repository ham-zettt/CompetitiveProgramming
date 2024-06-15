#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
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
	int k, idx, total;
	cin >> k;

	int koin[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000}, n=10;

	idx = upper_bound(koin, koin+n, k) - koin - 1;
	while(idx--){
		total = 0;
		while(k >= koin[idx]){
			total++;
			k -= koin[idx];
		}
		if(total != 0) cout << koin[idx] << " " << total << endl;
	}
}