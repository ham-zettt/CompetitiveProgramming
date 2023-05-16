#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;

	for(char c: s){
		if(isupper(c)) cout << char(tolower(c));
		else cout << char(toupper(c));
	}
}