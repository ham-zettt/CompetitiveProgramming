#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int n;
	string s = "";
	char word[4] = {'a', 'd', 'i', 'w'};
	cin >> n;

	for(int i=0; i<round(float(n)/2); i++){
			s += word[i%4];
	}

	for(int i=n/2; i>0; i--){
		s += s[i-1];
	}
	

	cout << s;
}