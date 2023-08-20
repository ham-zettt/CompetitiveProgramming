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
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	
	if(a/b > c/d){
		cout << "lebih besar";
	} else if(a/b < c/d){
		cout << "lebih kecil";
	} else{
		cout << "sama";
	}
}