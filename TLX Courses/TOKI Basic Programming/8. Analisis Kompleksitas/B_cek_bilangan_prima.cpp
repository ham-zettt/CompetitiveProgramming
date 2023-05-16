#include <iostream>
using namespace std;

void solve(){
	int n;
	int check = 2;
	bool isPrime = true;

	cin >> n;

	if(n==1 or n==0) isPrime = false;
	else{
		while(check*check <= n){
			if(n%check == 0){
				isPrime = false;
				break;
			}

			check++;
		}
	}

	if(isPrime) cout << "YA" << endl;
	else cout << "BUKAN" << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}