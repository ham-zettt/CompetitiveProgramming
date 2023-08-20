#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n, a, modus, count[100001];
	int modusValue = 0;
	memset(count, 0, sizeof(count));
	cin >> n;

	for(int x=0; x<n; x++){
		cin >> a;
		count[a]++;

		if(count[a]>modusValue){
			modus = a;
			modusValue = count[a];
		} else if(count[a]==modusValue){
			modus = max(a, modus);
		}
	}

	cout << modus;
}