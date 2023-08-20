#include <iostream>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;

	int arr[n+2][m+2];
	for(int i=0; i<=n+1; i++){
		for(int j=0; j<=m+1; j++){
			arr[i][j] = 1;
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> arr[i][j];
		}
	}

	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			int sum = arr[j-1][i] * arr[j][i-1] * arr[j+1][i] * arr[j][i+1];
			if(sum==k){
				cout << j << " " << i;
				return 0;
			}
		}
	}
	cout << "0 0";
}