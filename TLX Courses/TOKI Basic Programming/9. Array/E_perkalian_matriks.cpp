#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n,m,p;
	int sum = 0;
	cin >> n >> m >> p;

	int a[n][m], b[m][p];
	//first array
	for(int x=0; x<n; x++){
		for(int y=0; y<m; y++){
			cin >> a[x][y];
		}
	}

	//second array
	for(int x=0; x<m; x++){
		for(int y=0; y<p; y++){
			cin >> b[x][y];
		}
	}

	//calculate
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			for(int k=0; k<m; k++){
				sum += a[i][k]*b[k][j];
			}
			cout << sum << " ";
			sum = 0;
		}
		cout << endl;
	}

}