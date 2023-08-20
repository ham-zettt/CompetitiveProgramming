#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

// Time Complexity : O(n+n+n) = O(n)

// EXPLANATION:
// untuk mememnuhi greedy chioce, urutkan arr1 secara ascending dan arr2 secara
// descending. Lalu kalikan arr1[i] dengan arr2[i]

// GREEDY:
// greedy choice: kalikan bilangan terbesar arr1 dengan bilangan terkecil arr2

int main(){
	int n;
	cin >> n;

	ll arr1[n], arr2[n];
	for(int i=0; i<n; i++){
		cin >> arr1[i];
	}

	for(int i=0; i<n; i++){
		cin >> arr2[i];
	}

	sort(arr1, arr1+n);
	sort(arr2, arr2+n, greater<int>());

	ll total = 0;
	for(int i=0; i<n; i++){
		total += arr1[i]*arr2[i];
	}

	cout << total;
}