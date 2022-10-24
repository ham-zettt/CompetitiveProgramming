#include <iostream>
#include <cmath>
using namespace std;

// string s;

// void f(int x){
// 	if(x==s.length()/2) cout << "YA";
// 	else if(s[x]==s[s.length()-1-x]) f(x+1);
// 	else cout << "BUKAN";
// }

int main(){
	string s;
	cin >> s;

	for(int i=0; i<=s.length()/2; i++){
		if(s[i]!=s[s.length()-1-i]) {
			cout << "BUKAN";
			break;
		} else if(i==s.length()/2) cout << "YA";
	}
}