#include <iostream>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;

	bool ok = false;
	for(int i=0; i<a.length(); i++){
		string temp = a;
		if(temp.erase(i,1) == b){
			ok = true;
		}
	}

	if(ok) cout << "Tentu saja bisa!";
	else cout << "Wah, tidak bisa :(";
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}