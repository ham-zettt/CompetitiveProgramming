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
	int m, a, b;
	cin >> m >> a >> b;

	if(a%2==0 || b%2==0){
		cout << 0;
	} else {
		if(2 + floor(a/2) + floor(b/2) > m) cout << 1;
		else cout << 0;
	}

	cout << " " << min(a,b);
}
