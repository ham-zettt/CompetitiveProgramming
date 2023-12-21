#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
	int n, s, k, a, b, ans=0;
	cin >> n >> s >> k;

	for(int i=0; i<n; i++){
		cin >> a >> b;
		ans += a*b;

	}
	if(ans < s) ans += k;

	cout << ans;
}