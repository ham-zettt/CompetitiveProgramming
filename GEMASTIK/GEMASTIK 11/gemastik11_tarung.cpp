#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	vector<int> ans;
	int n,m,idxPositive,idxNegative = 0,maxx = 109;
	cin >> n >> m;	//m value is first index of array

	n-=1;	//deleted first index
	int p[n];
	for(int i=0; i<n; i++){
		cin >> p[i];
	}

	sort(p, p+n);
	for(int i=0; i<n; i++){
		if(p[i]>0 && p[i]<maxx){
			idxPositive = i;
			maxx = p[i];
		}
	}

	for(int i=idxPositive; i<n; i++){
		if(m>p[i]){
			m -= p[i];
			ans.push_back(p[i]);
		}else if(m<p[i] && idxPositive!=idxNegative){
			m = abs(m-p[i]);
			ans.push_back(p[i]);
		} else if(idxPositive==idxNegative){
			cout << "menang" << endl;
			break;
		} else{
			cout << "kalah" << endl;
			break;
		}
	}
	for(int i: ans) cout << i << " ";
}
