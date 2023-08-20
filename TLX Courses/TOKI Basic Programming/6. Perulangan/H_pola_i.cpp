#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	for(int x=1; x<=n; x++){
		if(x%k == 0) cout << "* ";
		else cout << x << " ";
	}
}