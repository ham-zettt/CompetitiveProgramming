#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a[100000];
	int x = 0;

	while(cin>>a[x]) x++;
	while(x--) cout << a[x] << endl;
}