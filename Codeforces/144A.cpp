#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
using namespace std;

int main(){
	int n, a;
	cin >> n;

	vector<int> vt;
	int maxIdx = 0, minIdx = 0;

	for(int i=0; i<n; i++){
		cin >> a;
		vt.pb(a);
		if(vt[i] > vt[maxIdx]){
			maxIdx = i;
		}
	}

	int temp = vt[maxIdx];
	vt.erase(vt.begin() + maxIdx);
	vt.insert(vt.begin(), temp);

	for(int i=1; i<n; i++){
		if(vt[i] <= vt[minIdx]){
			minIdx = i;
		}
	}

	cout << maxIdx + (vt.size() - minIdx - 1);
}
