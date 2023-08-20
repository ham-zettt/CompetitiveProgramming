#include <iostream>
using namespace std;

int main(){
	int n;
	int count = 0;
	cin >> n;

	for(int x=1; x<=n; x++){
		for(int y=1; y<=x; y++){
			cout << count++;
			if(count==10) count = 0;
		}

		cout << endl;
	}
}