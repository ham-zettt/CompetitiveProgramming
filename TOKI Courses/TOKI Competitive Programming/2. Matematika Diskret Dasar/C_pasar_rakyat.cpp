#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int fpb(int a, int b){
	if(b==0) return a;
	else return fpb(b,a%b);
}

void solve(){
	int n;
	cin >> n;

	int d,ans;
	cin >> d;
	ans = d;

	for(int i=0; i<n-1; i++){
		cin >> d;
		ans = (ans*d)/fpb(ans,d);
	}

	cout << ans;
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}