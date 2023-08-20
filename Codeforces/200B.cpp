#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
using namespace std;

int main(){
	int n;
	cin >> n;

	float a, total = 0;
	for(int i=0; i<n; i++){
		cin >> a;
		total += 1*a/100;
	}
	total = total/n*100;
	printf("%.12f\n", total);
}
