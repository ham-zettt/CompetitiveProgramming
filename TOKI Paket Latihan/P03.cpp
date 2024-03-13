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
	int a, b, c, x, y, arr[100], hasil=0;
	cin >> a >> b >> c;

	fill(arr, arr+100, 0);
	for(int i=0; i<3; i++){
		cin >> x >> y;
		for(int j=x; j<y; j++){
			arr[j]++;
		}
	}

	for(int i=0; i<=100; i++){
		if(arr[i] == 1) hasil += a;
		else if(arr[i] == 2) hasil += b*2;
		else if(arr[i] == 3) hasil += c*3;
	}

	cout << hasil;
}