#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, a, b, c;
		cin >> n;

		int maxx=0, minn=0;
		for(int i=0; i<n; i++){
			cin >> a >> b >> c;
			maxx += max(max(a,b), c);
			minn += min(min(a,b), c);
		}

		cout << minn << " " << maxx << endl;
	}
}