#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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