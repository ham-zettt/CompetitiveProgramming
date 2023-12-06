#include <iostream>
using namespace std;

void solve(){
	int n,h=0,m=0,s=0;
	cin >> n;

	while(n>0){
		if(n>=3600){
			h++;
			n -= 3600;
		}else if(n>=60){
			m++;
			n -= 60;
		} else{
			s = n;
			n -= n;
		}
	}

	cout << h << endl << m << endl << s;
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}