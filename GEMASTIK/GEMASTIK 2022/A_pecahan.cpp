#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	
	if(a/b > c/d){
		cout << "lebih besar";
	} else if(a/b < c/d){
		cout << "lebih kecil";
	} else{
		cout << "sama";
	}
}