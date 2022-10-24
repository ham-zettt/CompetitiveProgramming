#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int b,p,l;
	cin >> b >> p >> l;

	if(b<=10 and p<=40 and l<=90) cout << "S";
	else if(b<=14 and p<=60 and l<=120) cout << "M";
	else if(b<=18 and p<=80 and l<=180) cout << "L";
	else cout << "X";
}