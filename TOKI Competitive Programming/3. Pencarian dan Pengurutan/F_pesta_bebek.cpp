#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;

	vector<string> vt;
	for(int i=0; i<n; i++){
		cin >> s;
		vt.push_back(s);
		sort(begin(vt), end(vt));

		//find
		for(int i=0; i<n; i++){
			if(vt[i] == s){
				cout << i+1 << endl;
				break;
			}
		}
	}
}