#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int m,n;
	cin >> m >> n;

	int a[m][n];
	for(int x=0; x<m; x++){
		for(int y=0; y<n; y++){
			cin >> a[x][y];
		}
	}

	for(int x=0; x<n; x++){
		for(int y=m-1; y>=0; y--){
			cout << a[y][x] << " ";
		}
		cout << endl;
	}
}