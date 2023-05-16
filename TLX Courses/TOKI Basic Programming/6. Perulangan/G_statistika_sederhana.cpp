#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, a;
	int maxNum = -100000, minNum = 100000;
	cin >> n;

	for(int x=0; x<n; x++){
		cin >> a;
		maxNum = max(maxNum, a);
		minNum = min(minNum, a);
	}

	cout << maxNum << endl << minNum;
}