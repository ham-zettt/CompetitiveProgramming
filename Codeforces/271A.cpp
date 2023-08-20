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
	int y;
	string s;
	cin >> y;

	while(true){	
		flag:
			y++;
			s = to_string(y);
		for(int i=0; i<s.length()-1; i++){
			for(int j=i+1; j<s.length(); j++){
				if(s[i] == s[j]){
					goto flag;
				}
			}
		}

		cout << y;
		return 0;
	}
}