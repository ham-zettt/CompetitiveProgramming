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
// Time Complexity : O(log b)

// EXPLANATION
// karena hasil solve bisa sangat besar, maka dimodulus
// terlebih dulu. Lalu counter problem untuk digit 0 
// saat proses modulus, contoh: 10000 % MOD = 0


int solve(ll a, ll b){
	const ll MOD = 1000000;
	if(b == 1){
		return a%MOD;
	} else{
		ll ans = solve(a, b/2);
		if(b%2 == 0){
			return ans%MOD * ans%MOD;
		} else{
			return ans%MOD * ans%MOD * a%MOD;
		}
	}
}

int main(){
	ll a, b;
	cin >> a >> b;

	ll ans = solve(a,b);
	string temp = to_string(ans);
	if(pow(a,b) < 1000000){
		cout << ans;
	} else {
		while(temp.length() < 6){
			temp.insert(0, "0");
		}
		cout << temp;
	}
}