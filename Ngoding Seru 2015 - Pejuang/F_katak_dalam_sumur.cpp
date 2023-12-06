#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, h, ans=0;
	cin >> n >> h;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr+n);
	ans += arr[n-1];

	int i = 0;
	while(ans<h){
		if(ans+arr[i] >= h){
			ans += arr[i];
			i = 0;
		} else{
			i++;
		}
	}

	cout << ans;
}