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
	int a,c;
	char b;
	cin >> a >> b >> c;

	if(b=='+') cout << a+c;
	else if(b=='-') cout << a-c;
	else if(b=='*') cout << a*c;
	else if(b=='<'){
		if(a<b) cout << "benar";
		else cout << "salah";
	}
	else if(b=='>'){
		if(a>c) cout << "benar";
		else cout << "salah";
	}
	else if(b=='='){
		if(a==c) cout << "benar";
		else cout << "salah";
	}
}
