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
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

// Time Complexity : O(n^2)

// EXPLANATION:
// gunakan 2 perulangan. Outer untuk bebek (karena bebek akan dicarikan sepatu), 
// inner untuk sepatu. Jika sepatu pas, lanjut ke bebek selanjutnya dan 
// mulai perulangan inner dari posisi sepatu tersebut + 1

// GREEDY
// greedy choice: pilih sepatu dengan (kaki >= ukuran) seminimal mungkin

int main(){
	int n, m, count=0;
	cin >> n >> m;

	int b[n], s[m];
	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	for(int i=0; i<m; i++){
		cin >> s[i];
	}

	sort(b, b+n);
	sort(s, s+m);

	int pos = 0;
	for(int i=0; i<n; i++){	// hitung bebek
		for(int j=pos; j<m; j++){	// hitung sepatu
			if(b[i] == s[j] || b[i]+1 == s[j]){
				count++;
				pos = j+1;
				break;
			} 
		}
	}

	cout << count;
}