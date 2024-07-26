#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }

int main(){
	int n, ans=0;
	cin >> n >> n;

	int arr1[n][n], arr2[n][n], temp[n][n], temp2[n][n];
	for(int i=0; i<n; i++){	
		for(int j=0; j<n; j++){
			cin >> arr1[i][j];
		}
	}

	cin >> n >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr2[i][j];
		}
	}
	
	for(int a=0; a<4; a++){
		// cek
		for(int x=0; x<n; x++){
			for(int y=0; y<n; y++){
				if(arr1[x][y] != arr2[x][y]) {
					goto skip;
				}
			}
		}

		cout << ans;
		return 0;

		skip:
		ans += 90;

		copy(&arr1[0][0], &arr1[0][0]+n*n, &temp[0][0]);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				temp[j][n-1-i] = arr1[i][j];
			}
		}
		
		copy(&temp[0][0], &temp[0][0]+n*n, &arr1[0][0]);
	}

	cout << "tidak sama";
}