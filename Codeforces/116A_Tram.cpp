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
	int n, a, b, maxx=0, total=0;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a >> b;
		total -= a;
		total += b;
		maxx = max(maxx, total);
	}

	cout << maxx;
}