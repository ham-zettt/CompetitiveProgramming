#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,x,c,minn,temp,ans;
	cin >> n >> x;

	for(int i=0; i<n; i++){
		cin >> c;
		temp = abs(x-c);

		if(i==0) {
			minn = temp;
			ans = c;
		}
		else if(temp<minn) {
			minn = temp;
			ans = c;
		}
		else if(temp==minn){
			ans = min(ans, c);
		}
	}

	cout << ans;
}