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
