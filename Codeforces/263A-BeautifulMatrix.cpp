#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define EACH(arr) for(auto a: arr)
using namespace std;

int main(){
	int a;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin >> a;
			if(a == 1){
				cout << abs(3-i) + abs(3-j);
				return 0;
			}
		}
	}
}