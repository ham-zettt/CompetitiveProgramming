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


int main() {
	int n, ans=0;
	
	cin >> n;
	
	int x[n], y[n];
	for(int i=0; i < n; i++) {
		cin >> x[i];
	}

	for(int i=0; i < n; i++) {
		cin >> y[i];
	}

	vector<int> x_temp, y_temp;

	// cari x yg sama
	for(int i=0; i < n; i++) {
		for (int j=i+1; j < n; j++) {
			if (x[i] == x[j] && !(find(x_temp.begin(), x_temp.end(), x[i]) != x_temp.end()) ) {
				x_temp.pb(x[i]);
				break;
			}
		}
	}

	// cari y yg sama
	for(int i=0; i < n; i++) {
		for (int j=i+1; j < n; j++) {
			if (y[i] == y[j] && !(find(y_temp.begin(), y_temp.end(), y[i]) != y_temp.end()) ) {
				y_temp.pb(y[i]);
				break;
			}
		}
	}

	bool y_valid=false, x_valid=false;
	for(int i=0; i < x_temp.size(); i++) {
		for(int j=0; j < y_temp.size(); j++) {	// [i][j]
			// cari yg sama, bandingkan titik y
			bool greater_y=false, smaller_y=false;
			for(int k=0; k < n && !(greater_y && smaller_y); k++) {
				if(x_temp[i] == x[k]) {
					if(y[k] > y_temp[j]) greater_y = true;
					if(y[k] < y_temp[j]) smaller_y = true;
				}
			}

			// cari yg sama, bandingkan titik x
			bool greater_x=false, smaller_x=false;
			if(greater_y && smaller_y){		// jika kondisi koordinat great_x dan small_y tdk valid, tdk ush cek x
				for(int k=0; k < n && !(greater_x && smaller_x); k++) {
					if(y_temp[j] == y[k]) {
						if(x[k] > x_temp[i]) greater_x = true;
						if(x[k] < x_temp[i]) smaller_x = true;
					}
				}
				if(greater_y && greater_x && smaller_y && smaller_x) ans++;
			}
		}
	}

	cout << ans;
}