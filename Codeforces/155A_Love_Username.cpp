#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	int n, a, prev, minn, maxx;
	int count = 0;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a;
		if((a < minn || a > maxx) && i>0){
			count++;
		}

		minn = min(minn, a);
		maxx = max(maxx, a);
	}

	cout << count;
}