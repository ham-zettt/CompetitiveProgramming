#include <iostream>
using namespace std;

void reverse(int &num){
	int rev = 0;
	while(num>0){
		rev = (rev*10) + num%10;
		num /= 10;
	}
	num = rev;
}

int main(){
	int a,b,c;
	cin >> a >> b;
	reverse(a);
	reverse(b);
	c = a+b;
	reverse(c);
	cout << c;
}