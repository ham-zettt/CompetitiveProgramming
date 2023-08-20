#include <iostream>
#include <cstring>
using namespace std;

void solve(){
	int arr[77777],idx=0;

	for(int i=2; i<990000; i++){
		bool isPrime = true;
		for(int j=2; j*j<=i;j++){
			if(i%j==0){
				isPrime = false;
				break;
			}
		}

		if(isPrime){
			arr[idx] = i;
			idx++;
		}
	}

	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		cout << arr[k-1] << endl;
	}
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}