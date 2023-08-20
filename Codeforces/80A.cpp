#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define pb push_back
#define EACH(arr) for(auto a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	while(true){
		flag:
		a++;
		for(int i=2; i*i<=a; i++){
			if(a%i == 0){
				goto flag;
			}
		}

		break;
	}

	if(a == b) cout << "YES";
	else cout << "NO";
}