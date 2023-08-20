#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int x=1; x<=n; x++){
		for(int y=n-x; y>0; y--){
			cout << " ";
		}

		for(int z=1; z<=x; z++){
			cout << "*";
		}

		cout << "\n";
	}
}