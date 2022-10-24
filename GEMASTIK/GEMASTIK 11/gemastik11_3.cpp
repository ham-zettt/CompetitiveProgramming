#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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