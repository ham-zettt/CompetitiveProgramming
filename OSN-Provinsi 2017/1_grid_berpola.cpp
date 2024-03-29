#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	float n, m;
	int x, y;
	cin >> n >> m >> x >> y;

	int arr[int(n)][int(m)];
	int tempN = n, tempM = m;
	int tempI = 0, tempJ =0 ;
	int inc = 0;

	for(int x=0; x<round(m/2); x++){
		inc++;
		for(int i=tempI; i<tempN; i++){
			for(int j=tempJ; j<tempM; j++){
				arr[i][j] = inc;
			}
		}
		tempI++;
		tempJ++;
		tempN--;
		tempM--;
	}

	// print array
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << arr[x-1][y-1];
}