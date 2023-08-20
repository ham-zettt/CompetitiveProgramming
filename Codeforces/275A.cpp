#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr) cout << a << endl;
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
using namespace std;

int main(){
	int a;
	int arr[4][4];

	//fill
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			arr[i][j] = 1;
		}
	}

	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			cin >> a;
			if(a%2 != 0){
				arr[i][j] = !arr[i][j];
				arr[i][j+1] = !arr[i][j+1];
				arr[i][j-1] = !arr[i][j-1];
				arr[i+1][j] = !arr[i+1][j];
				arr[i-1][j] = !arr[i-1][j];
			}
		}
	}

	//out
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}