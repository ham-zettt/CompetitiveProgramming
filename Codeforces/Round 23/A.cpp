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
// Time Complexity : O(n^3)

// EXPLANATION
// cari semua kemungkinan substring (brute force), lalu
// cocokkan apakah substring muncul minimal 2 kali menggunakan for(k) 


int main(){
	string s;
	cin >> s;

	int ans = 0;
	for(int i=0; i<s.length(); i++){
		for(int j=1; j<=s.length()-i; j++){
			string temp = s.substr(i,j);
			int count = 0;
			for(int k=0; k<=s.length()-temp.length(); k++){
				if(temp == s.substr(k, temp.length())){
					count++;
				}
			}

			if(count >= 2) ans = max(ans, int(temp.length()));
		}
	}

	cout << ans;
}