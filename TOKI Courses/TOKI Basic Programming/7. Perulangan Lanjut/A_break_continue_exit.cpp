#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int x=1; x<=n; x++){
		if(x%10==0) continue;
		if(x==42){
			cout << "ERROR";
			break;
		}

		cout << x << "\n";
	}
}