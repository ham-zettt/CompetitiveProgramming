#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }

int main() {
	int n, nearest;
	cin >> n;

	vector<int> ans;

	while(n){
		nearest = floor(log(n)/log(3));
		unsigned ll hasil_pow = pow(3,nearest);
		ans.pb(hasil_pow);
		n -= hasil_pow;
	}

	cout << ans.size() << endl;
	for(int i=ans.size()-1; i>=0; i--){
		cout << ans[i] << " ";
	}
}