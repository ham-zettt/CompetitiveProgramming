#include <iostream>
using namespace std;

int a,b;
int func(int &x){
	return abs(a*x + b);
}

int main(){
	int k,x;
	cin >> a >> b >> k >> x;

	while(k--){
		x = func(x);
	}
	cout << x;
}