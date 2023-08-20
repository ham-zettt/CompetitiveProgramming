#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr)
using namespace std;

int main(){
	string s;
	vector<char> vt;
	
	cin >> s;

	for(int i=0; i<s.length(); i++){
		if(s[i] == '.'){
			cout << 0;
		} else if(s[i] == '-' and s[i+1] == '.'){
			cout << 1;
			i++;
		} else{
			cout << 2;
			i++;
		}
	}

}