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

bool sort_second(pair<int, int> &a, pair<int, int> &b){
	return a.second < b.second;
}


// UNSOLVED
// Time Complexity: O(n^2)

// EXPLANATION
// cek semua kemungkinan (metode brute force)

int main(){
	bool ident = true;
	int n;
	cin >> n >> n;

	int arr1[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr1[i][j];
		}
	}

	cin >> n >> n;
	int arr2[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr2[i][j];
			// identik
			if(arr1[i][j] != arr2[i][j]){
				ident = false;
				break;
			}
		}
	}

	if(ident){
		cout << "identik";
		return 0;
	}


	// horizontal
	ident = true;
	for(int i=0; i<n/2; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[n-i-1][j]){
				ident = false;
				break;
			}
		}

	}

	if(ident){
		cout << "horisontal";
		return 0;
	}


	// vertical
	ident = true;
	for(int i=0; i<n/2; i++){
		for(int j=0; j<n; j++){
			if(arr1[j][i] != arr2[j][n-i-1]){
				ident = false;
				break;
			}
		}
	}

	if(ident){
		cout << "vertikal";
		return 0;
	}


	// diagonal kanan-bawah
	ident = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[j][i]){
				ident = false;
				break;
			}
		}
	}

	if(ident){
		cout << "diagonal kanan bawah";
		return 0;
	}


	// diagonal kiri-bawah
	ident = true;
	for(int i=0; i<n; i++){
		for(int j=n-1; j>=0; j--){
			if(arr1[i][j] != arr2[n-j-1][n-i-1]){
				ident = false;
				break;
			}
		}
	}

	if(ident){
		cout << "diagonal kiri bawah";
		return 0;
	} else{
		cout << "tidak identik";
		return 0;
	}
}