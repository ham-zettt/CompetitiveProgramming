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

int main(){
	int n, a;
	string s;
	vector<int> vt;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> s;
		if(s == "push_back"){
			cin >> a;
			vt.pb(a);
		} else if(s == "push_front"){
			cin >> a;
			vt.insert(vt.begin(), a);
		} else if(s == "pop_front"){
			vt.erase(vt.begin());
		} else if(s == "pop_back") {
			vt.pop_back();
		}
	}

	EACH(vt) cout << a << endl;
}