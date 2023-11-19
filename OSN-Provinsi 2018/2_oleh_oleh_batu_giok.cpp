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

int euclid(int a, int b){
	if(b==0) return a;
	else return euclid(b, a%b);
}

int main(){
	int n, b, gcdNow=1;
	bool isUnique = true;
	vector<int> vt;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> b;
		gcdNow = euclid(gcdNow, b);
		vt.push_back(b);
	}

	//cek unique
	for(int i=0; i<vt.size()-1; i++){
		for(int j=i+1; j<vt.size(); j++){
			if(vt[i] == vt[j]){
				isUnique = false;
				break;
			}
		}	
	}
	
	if(isUnique && gcdNow==1) cout << "LAYAK";
	else cout << "TIDAK LAYAK";
}