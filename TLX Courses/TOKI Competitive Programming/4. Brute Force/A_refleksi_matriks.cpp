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

int n, arr1[75][75], arr2[75][75];

bool identik(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[i][j]) return false;
		}
	}
	return true;
}

bool horizontal(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[n-i-1][j]) return false;
		}
	}
	return true;
}

bool vertikal(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[i][n-j-1]) return false;
		}
	}
	return true;
}

bool diagonalKananBawah(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[j][i]) return false;
		}
	}
	return true;
}

bool diagonalKiriBawah(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] != arr2[n-j-1][n-i-1]) return false;
		}
	}
	return true;
}

int main(){
	cin >> n >> n;

	// input arr1
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr1[i][j];
		}
	}

	// input arr2
	cin >> n >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr2[i][j];
		}
	}

	if(identik()) cout << "identik";
	else if(horizontal()) cout << "horisontal";
	else if(vertikal()) cout << "vertikal";
	else if(diagonalKananBawah()) cout << "diagonal kanan bawah";
	else if(diagonalKiriBawah()) cout << "diagonal kiri bawah";
	else cout << "tidak identik";
	
}