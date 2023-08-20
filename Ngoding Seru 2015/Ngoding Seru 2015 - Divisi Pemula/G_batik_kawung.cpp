#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int k[100][100];
	int n,a;
	char c;
	cin >> n >> c >> a;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j or i+j==n-1) cout << a;
			else cout << c;
		}
		cout << endl;
	}
}