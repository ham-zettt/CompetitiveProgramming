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
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int convert(string s){
	if(s == "A") return 1;
	if(s == "B") return 2;
	if(s == "C") return 3;
	if(s == "D") return 4;
	if(s == "E") return 5;
}

int main(){
	int res1, res2;
	string s, t, s1, s2, t1, t2;
	cin >> s >> t;

	s1 = s.substr(0, 1);
	s2 = s.substr(1, 1);
	t1 = t.substr(0, 1);
	t2 = t.substr(1, 1);

	res1 = abs(convert(s1)-convert(s2));
	res2 = abs(convert(t1)-convert(t2));
	if(res1 >= 3) res1 = 5-res1;
	if(res2 >= 3) res2 = 5-res2;

	if(res1 == res2) cout << "Yes";
	else cout << "No";
}