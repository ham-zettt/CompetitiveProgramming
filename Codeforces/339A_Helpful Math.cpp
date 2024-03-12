#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <array>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int n;

int * generate(){
	static int arr[5];
	for(int i=0; i<n; i++){
		arr[i] = i+1;
	}
	return arr;
}

int f(){
	static int a = 1;
	a++;
	return a;
}

int main(){
	cin >> n;

	// int *arr = generate();
	// for(int i=0; i<n; i++){
	// 	cout << arr[i] << endl;
	// }

	for(int i=0; i<5; i++){
		cout << f() << endl;
	}
}