#include <iostream>
#include <vector>
#include <typeinfo>
#include <algorithm>
using namespace std;

int main(){
	int n, maxx=0, ans=0;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
	}

	for(int i=0; i<n; i++){
		if(arr[i] == maxx) ans++;
	}

	cout << ans;
}