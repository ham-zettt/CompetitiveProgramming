#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
using namespace std;

int main(){
	int lower = 0, upper = 0;
	string s;
	cin >> s;

	EACH(s){
		if(islower(a)) lower++;
		else upper++;
	}

	if(lower > upper || lower == upper) EACH(s) cout << (char)tolower(a);
	else EACH(s) cout << (char)toupper(a);
	
}