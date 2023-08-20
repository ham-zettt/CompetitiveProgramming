#include <iostream>
using namespace std;

int a,b,k,x;

int f(int x, int k){
	if(k==0) return x;
	else return abs(a*f(x,k-1)+b);
}

int main(){
	cin >> a >> b >> k >> x;
	cout << f(x,k);
}