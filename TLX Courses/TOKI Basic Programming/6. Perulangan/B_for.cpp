#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, b, sum=0;

	cin >> n;
	for(int x=0; x<n; x++){
		cin >> b;
		sum += b;
	}

	cout << sum;
}