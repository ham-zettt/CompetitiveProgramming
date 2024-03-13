#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;

	for(int i=0; i<s.length(); i++){
		if(s[i]=='_'){
			cout << char(toupper(s[i+1]));
			i++;
		} else if(isupper(s[i])){
			cout << "_" << char(tolower(s[i]));
		} else{
			cout << s[i];
		}
	}
}