#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
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

int main(){
	int t, n;
	cin >> t;

	while(t--){
		cin >> n;
		cout << (!(n%6) ? "TIDAK" : "YA") << endl;
	}
}