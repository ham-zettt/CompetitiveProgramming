#include <iostream>
using namespace std;

int main(){
	int a,n,d;
	cin >> a >> n >> d;

	for(int i=0; i<n; i++){
		cout << a << endl;
		a+=d;
	}
}