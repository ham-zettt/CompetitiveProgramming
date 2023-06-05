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

// EXPLANATION
// coba satu-satu menggunakan rekursif. coba smallMax, jika sesuai ketentuan
// simpan batasnya, lalu lanjutkan percobaan. Jika tidak sesuai, coba bigMax.
// jangan lupa di pop_back karena jika smallMax gagal, akan dicoba di bigmax

int m, n;
int arr[10000];
int bigTotal, smallTotal, bigMax, smallMax;

void solve(int start, int sTotal, int bTotal, vector<int> vt){
	if((sTotal == 1 && bTotal == 0) || (sTotal == 0 && bTotal == 1)){
		EACH(vt) cout << a << " ";
		exit(0);
	}

	if(sTotal > 0 && arr[start+smallMax-1] != arr[start+smallMax]){
		vt.pb(arr[start+smallMax-1] + 1);
		solve(start + smallMax, sTotal-1, bTotal, vt);
		vt.pop_back();
	}

	if(bTotal > 0 && arr[start+bigMax-1] != arr[start+bigMax]){
		vt.pb(arr[start+bigMax-1] + 1);
		solve(start + bigMax, sTotal, bTotal-1, vt);
		vt.pop_back();
	}

	return;
}

int main(){
	cin >> m;

	for(int i=0; i<m; i++){
		cin >> arr[i];
	}

	cin >> n;

	// slot
	bigTotal = m%n;
	smallTotal = n - bigTotal;
	smallMax = floor(m/n);
	bigMax = smallMax + 1;;

	sort(arr, arr+m);
	solve(0, smallTotal, bigTotal, {});
}