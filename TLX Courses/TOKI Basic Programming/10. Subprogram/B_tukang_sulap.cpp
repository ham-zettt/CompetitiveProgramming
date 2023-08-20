#include <iostream>
using namespace std;

int main(){
	int ball[2][1000];
	int n,t,x,y,row1,row2;
	char p,q;
	cin >> n;

	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			cin >> ball[i][j];
		}
	}

	cin >> t;
	while(t--){
		cin >> p >> x >> q >> y;
		if(p=='A') row1 = 0;
		else row1 = 1;
		if(q=='A') row2 = 0;
		else row2 = 1;
		
		int temp = ball[row1][x-1];
		ball[row1][x-1] = ball[row2][y-1]; 
		ball[row2][y-1] = temp;
	}

	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			cout << ball[i][j] << " ";
		}
		cout << endl;
	}
}