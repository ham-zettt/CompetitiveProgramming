#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int n, m, ans=0;
	cin >> n >> m;

	int arr[n];
	memset(arr, 0, sizeof(arr));

	for(int i=0; i<m; i++){
		int temp;
		cin >> temp;

		for(int j=1; j<=n; j++){
			if(j==temp){
				arr[j-1]++;
				break;
			}
		}
	}

	for(int i: arr){
		if(i%4==2 || i%4==3){
			ans++;
		}
	}	
	cout << ans << endl;
}