#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i=2; i<=n; i++){
		int count = 0;
		while(n%i==0){
			count++;
			n/=i;
		}

		if(count>1){
			cout << i << "^" << count;
			if(i<n) cout << " x ";
		} else if(count==1){
			cout << i;	
			if(i<n) cout << " x ";
		} 
	}
}