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
	int n,m;
	cin >> n >> m;

	int a[n], b[n];
	pair<int,int> pair1[n];
	
	for(int i=0; i<n; i++){
		cin >> a[i];
		pair1[i].first = a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
		pair1[i].second = b[i];
	}

	sort(pair1, pair1+n);
	for(int i=0; i<n; i++){
		if(m>=pair1[i].first) m+=pair1[i].second;
		else break;
	}
	
	cout << m;
}