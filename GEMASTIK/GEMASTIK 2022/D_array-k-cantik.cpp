#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

#define ll long long
#define pb push_back
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	int n;
	cin >> n;

	int arr[n], freq[n];

	fill(freq, freq+n, 0);
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		arr[i] = a;
		freq[a]++;
	}

	EACH(freq) cout << a << " ";
}