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

// Time Complexity : O(n^2)

// EXPLANATION:
// karena gc mengambil harga termurah, maka sort data dimulai data data 
// termurah. Lakukan perhitungan dari data awala

// GREEDY:
// greedy choice: ambil harga cokelat termurah

int main(){
	ll n, d, a, b, count=0;
	cin >> n >> d;

	vector<pair<ll,ll>> pr;	// harga satuan, bebek suka

	for(int i=0; i<n; i++){
		cin >> a >> b;
		pr.pb(mp(a, b));
	}

	sort(pr.begin(), pr.end());

	for(int i=0; i<n; i++){
		for(int j=0; j<pr[i].second; j++){	// untuk setiap bebek
			if(d - pr[i].first >= 0){	// jika anggaran masih cukup untuk beli, maka beli 
				count++;
				d -= pr[i].first;
			} else {
				break;
			}
		}
	}

	cout << count;
}
