#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[3];
	char k;

	for(int i=0; i<3; i++){
		cin >> a[i];
	}

	cin >> k;
	if(k=='0') sort(begin(a), end(a), greater<>());
	else sort(begin(a), end(a));

	for(int i: a){
		cout << i << " ";
	}
}