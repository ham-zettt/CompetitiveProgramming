#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	if(n>0 and n<10) cout << "satuan";
	else if(n>9 and n<100) cout << "puluhan";
	else if(n>99 and n<1000) cout << "ratusan";
	else if(n>999 and n<10000) cout << "ribuan";
	else if(n>9999 and n<100000) cout << "puluhribuan";
}