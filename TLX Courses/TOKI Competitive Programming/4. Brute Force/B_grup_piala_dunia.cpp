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

bool sort_second(pair<int, int> &a, pair<int, int> &b){
	return a.second < b.second;
}


// SOLVED
// Time Complexity : O(3^matchTotal)

// EXPLANATION
// lakukan brute force untuk semua kemungkinan skor


pair<int,int> match[11];
int arr[5];
int n, matchTotal;
bool ans;

void bf(int matchCount, int skorNow[]){
	// base case
	// Berhenti saat match ke-n telah mencapai jumlah match maksimal
	// Saat itu juga, langsung cek apakah hasil akhir tersebut sama dengan yang diharapkan (vt)
	if(matchCount >= matchTotal){
		bool temp = true;
		for(int i=0; i<n; i++){
			if(arr[i] != skorNow[i]){
				temp = false;
				break;
			}
		}
		
		if(temp) ans = true;		
		return;
	}


	// Home WIN - Away LOSE
	skorNow[match[matchCount].first] += 3;
	bf(matchCount+1, skorNow);
	skorNow[match[matchCount].first] -= 3;

	// DRAW
	skorNow[match[matchCount].first] += 1;
	skorNow[match[matchCount].second] += 1;
	bf(matchCount+1, skorNow);
	skorNow[match[matchCount].first] -= 1;
	skorNow[match[matchCount].second] -= 1;

	// Home LOSE - Away WIN
	skorNow[match[matchCount].second] += 3;
	bf(matchCount+1, skorNow);
	skorNow[match[matchCount].second] -= 3;

	return;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		ans = false;
		cin >> n;

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		// inisialisasi match sebagai pertandingan home melawan away (match.home , match.away)
		// Digunakan untuk patokan index saat akan menambahkan skor pada vt[i]
		int idx = 0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				match[idx] = {i,j};
				idx++;
			}
		}

		// lakukan brute force dari skor awal 0
		int skorNow[n];
		fill(skorNow, skorNow+n, 0);
		matchTotal = n*(n-1)/2;	// didapatkan dengan rumus 2Cn, karena memilih kombinasi 2 tim dari n
		bf(0, skorNow);

		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}