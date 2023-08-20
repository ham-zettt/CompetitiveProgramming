#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[1000][2];
	int n,d,t,maxx=0,minn;
	cin >> n >> d;

	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			t = abs(pow(arr[i][0]-arr[j][0],d)) + abs(pow(arr[i][1]-arr[j][1],d));
			if(i==0 and j==1){
				maxx = t;
				minn = t;
			}
			maxx = max(maxx,t);
			minn = min(minn,t);
		}
	}

	cout << minn << " " << maxx;
}