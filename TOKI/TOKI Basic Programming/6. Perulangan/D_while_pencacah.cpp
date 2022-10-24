#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, sum=0;
	while(!(cin>>a).eof()){
		sum += a;
	}

	cout << sum;
}