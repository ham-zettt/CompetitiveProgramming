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
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

ll fpb(ll a, ll b){
	if(b == 0) return a;
	else return fpb(b, a%b);
}

ll kpk(ll a, ll b){
	return a*b/fpb(a,b);
}

int main(){
	ll n, a, b;
	cin >> n >> a >> b;

	ll k = kpk(a,b);
	cout << k/a + k/b;
}
