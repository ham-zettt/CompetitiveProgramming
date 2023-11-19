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

int reverse(int x){
	int rev = 0;
	while(x>0){
		rev = (rev*10) + (x%10);
		x /= 10;
	}
	return rev;
}

void solve(){
	int n,temp;
	
	cin >> n;
	int x[n], reversed[n];

	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp/10 == 0){
			temp *= 10;
			x[i] = temp;
		} else{
			x[i] = reverse(temp);
		}
	}
	sort(x, x + sizeof(x)/sizeof(x[0]));
	for(int i=0; i<n; i++){
		cout << reverse(x[i]) << endl;
	}
}

int main(){
	int t = 1;
	// cin >> t;
	while(t--){
		solve();
	}
}