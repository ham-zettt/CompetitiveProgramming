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

ll MOD = 1e9 + 7;

using Matrix = array<array<ll, 2>, 2>;

Matrix mul(Matrix a, Matrix b) {
	Matrix res = {{{0, 0}, {0, 0}}};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				res[i][j] += a[i][k] * b[k][j];
				res[i][j] %= MOD;
			}
		}
	}

	return res;
}

// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 
// 0 1 2 3 4 5 6  7  8  9 10 11  12  13

int main() {
	ll n;
	cin >> n;

	Matrix base = {{{1, 0}, {0, 1}}};
	Matrix m = {{{1, 1}, {1, 0}}};

	n++;
	for (; n > 0; n /= 2) {
		if (n%2==1) base = mul(base, m);
		m = mul(m, m);
	}


	cout << (base[0][1] * base[0][1]) % MOD;
}
