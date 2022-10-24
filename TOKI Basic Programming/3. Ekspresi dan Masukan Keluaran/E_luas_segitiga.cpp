#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float a, t;
	cin >> a >> t;

	cout << fixed << setprecision(2) << a*t/2;
}