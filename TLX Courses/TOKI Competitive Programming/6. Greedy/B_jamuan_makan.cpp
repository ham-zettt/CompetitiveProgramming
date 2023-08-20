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

// Time Complexity : O(n)

// EXPLANATION: 
// ambil waktu selesai tercepat

// GREEDY:
// greedy choice: ambil waktu selesai (waktu awal + durasi) yang paling cepat
// subproblem: pemilihan teman selanjutnya

bool sort_second(pair<int,int> &a, pair<int,int> &b){
	return a.second < b.second;
}

int main(){
	int n, start=0, count=0;
	vector<pair<int,int>> pr;

	cin >> n;

	int a, b;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		pr.pb(mp(a, a+b));
	}

	sort(pr.begin(), pr.end(), sort_second);

	for(int i=0; i<pr.size(); i++){
		if(pr[i].first >= start){
			count++;
			start = pr[i].second;
		}
	}

	cout << count;
}