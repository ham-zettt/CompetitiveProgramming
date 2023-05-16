#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	cin >> a;

	for(int x=1; x<=a; x++){
		if(a%x==0) cout << a/x << endl;;
	}
}