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
	int n;
	cin >> n;

	vector<int> vt;
	while(n--){
		string s;
		cin >> s;

		int x, y, del;
		if(s == "add"){
			cin >> x >> y;
			while(y--){
				vt.pb(x);
			}
			cout << vt.size() << endl;

		} else if(s == "del"){
			cin >> del;
			cout << vt[0] << endl;
			vt.erase(vt.begin(), vt.begin()+del);
		
		} else {
			// vector<int> temp;
			// for(int i=vt.size()-1; i>=0; i--){
			// 	temp.pb(vt[i]);
			// }
			// vt = temp;
			reverse(vt.begin(), vt.end());
		}

	}
}