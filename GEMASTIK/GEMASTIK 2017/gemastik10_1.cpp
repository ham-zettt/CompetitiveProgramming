#include <iostream>
using namespace std;

int main(){
	int n;
	int ans = 0;
	cin >> n;

	int a[n], b[n];
	for(int x=0; x<n; x++){
		cin >> a[x] >> b[x];
	}

	for(int x=0; x<n; x++){
		for(int y=0; y<n; y++){
			ans += a[x]+b[y];
		}
	}

	cout << ans;
}