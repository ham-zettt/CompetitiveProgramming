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
	string x, y;
	ll hasil = 0;
	cin >> x >> y;

	for(char b: y){
		for(char a: x){
			hasil += (a-'0')*(b-'0'); 
		}
	}

	cout << hasil;
}