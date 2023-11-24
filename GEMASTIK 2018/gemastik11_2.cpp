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
	int n,cnt=0;
	float x,y,p,q;
	cin >> n >> x >> y;

	float m[n];
	for(int i=0; i<n; i++){
		cin >> p >> q;
		//gradient
		m[i] = (q-y)/(p-x);
	}

	sort(m, m+n);
	for(int i=0; i<n; i++){
		while(i<n-1 && m[i] == m[i+1]){
			i++;
		}
		cnt++;
	}
	cout << cnt;
}