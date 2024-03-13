#include <iostream>
using namespace std;
#define ll long long

ll fpb(ll a, ll b){
	if(b==0) return a;
	else return fpb(b,a%b);
}

void solve(){
	ll a,b,c,d,top,bottom;
	cin >> a >> b >> c >> d;

	top = a*d + b*c;
	bottom = b*d;

	ll div = fpb(top,bottom);
	top /= div;
	bottom /= div;
	
	cout << top << " " << bottom;
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}