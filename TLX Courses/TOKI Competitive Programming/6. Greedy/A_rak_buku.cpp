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

// Time Complexity : O(n)

// EXPLANATION:
// urutkan data secara descending karena akan diambil jumlah bebek minimal. 
// Lalu tambah nilai total satu persatu dengan array. Jika total sudah mencapai b, berhenti.

// GREEDY:
// greedy choice: ambil jumlah bebek seminimal mungkin
// subproblem: pemilihan bebek selanjutnya setelah bebek-n

int main(){
	int n, b, total=0;
	cin >> n >> b;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr+n, greater<int>());

	for(int i=0; i<n; i++){
		total += arr[i];
		if(total >= b){
			cout << i+1;
			return 0;
		}
	}
}