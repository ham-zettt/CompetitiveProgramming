#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a[3][3];
	int ans[3][3];

	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			cin >> a[x][y];
			ans[y][x] = a[x][y];
		}
	} 

	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			cout << ans[x][y] << " ";
		}
		cout << endl;
	}
}