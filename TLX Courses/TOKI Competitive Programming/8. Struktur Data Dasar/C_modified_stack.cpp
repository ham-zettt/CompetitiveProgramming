#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
	int n, sum=0;
	cin >> n;

	vector<int> vt;
	while(n--){
		string s;
		cin >> s;

		int x, y;
		if(s == "add"){
			cin >> x >> y;
			while(y--){
				vt.pb(x-sum);
			}
			cout << vt.size() << endl;

		} else if(s == "del"){
			cin >> y;
			cout << vt[vt.size()-1] + sum << endl;;
			vt.erase(vt.end()-y, vt.end());
		
		} else if(s == "adx"){
			cin >> x;
			sum += x;
		
		} else if(s == "dex"){
			cin >> x;
			sum -= x;

		}
	}
}