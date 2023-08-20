#include <iostream>
#include <string>
using namespace std;

int main(){
	string pass;
	int countAbjad = 0;
	bool isUpper=false, isLower=false, is8Char=false, isSpecial=false, isNumber=false;
	cin >> pass;

	for(char check : pass){
		if(check>='A' and check<='Z'){
			isUpper = true;
			countAbjad++;
		}
		else if(check>='a' and check<='z'){
			isLower = true;
			countAbjad++;
		}
		else if(check>='0' and check<='9') isNumber = true;
		else isSpecial = true;
	}

	if(isUpper && isLower && isSpecial && isNumber && pass.length()>=8){
		cout << "Kuat" << endl;
	} else if(countAbjad>=12){
		cout << "AgakKuat" << endl;
	} else{
		cout << "Lemah" << endl;
	}
}