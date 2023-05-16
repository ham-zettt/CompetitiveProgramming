#include <iostream>
using namespace std;

int main(){
	int n, m;	// input
	int a, b=0;	// result
	cin >> n >> m;

	if(n%m==0) a = n/m;
	else{
		a = n/m;
		b = n%m;
	}

	cout << "masing-masing " << a << endl;
	cout << "bersisa " << b << endl;
}