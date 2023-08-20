#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool sc(string a, string b){
	if(a.length() < b.length()) return true;
	if(a.length() == b.length() && a<b) return true;
	return false;
}

int main(){
	int n;
	cin >> n;

	string arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr+n, sc);

	for(auto a: arr) cout << a << endl;
}
