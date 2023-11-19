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

int main(){
	float n, m, x, y, maxScore;
	cin >> n >> m >> x >> y;

	maxScore = (20 + 15*2)/2;
	if((n-x) + (m-y)*2 > maxScore) cout << "LOLOS";
	else cout << "TIDAK LOLOS";
}
