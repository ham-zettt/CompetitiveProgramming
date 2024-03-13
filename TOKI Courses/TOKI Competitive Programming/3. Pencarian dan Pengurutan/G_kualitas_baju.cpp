#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;

	float arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr+n);
	if(n%2==0) cout << fixed << setprecision(1) << (arr[n/2-1]+arr[n/2])/2;
	else cout << fixed << setprecision(1) << arr[n/2];
}