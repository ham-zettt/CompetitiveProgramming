#include <iostream>
using namespace std;

int main(){
	string s;
	int k;
	cin >> s >> k;

	for(char c: s){
		int temp;
		temp = c+k;
		if(temp>'z') temp -= 26;
		cout << char(temp);
	}
}