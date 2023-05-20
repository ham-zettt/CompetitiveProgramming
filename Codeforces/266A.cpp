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
	string s;
	cin >> n >> s;

	for(int i=0; i<s.length(); i++){
		while(s[i] == s[i+1]){
			s.erase(i, 1);
		}
	}

	cout << n - s.length();
}