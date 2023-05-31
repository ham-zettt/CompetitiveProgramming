#include <iostream>
#include <algorithm>
#include <cstring>
#include <set>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

bool sort_second(pair<int, int> &a, pair<int, int> &b){
	return a.second < b.second;
}

vector<string> ans;
int arr[128][128];

void solve(int startR, int endR, int startC, int endC, string code){

	// cout << "CODE: " << code << endl;
	// cout << "startR: " << startR << endl;
	// cout << "endR: " << endR << endl;
	// cout << "startC: " << startC << endl;
	// cout << "endC: " << endC << endl;

	// cek homogen
	bool homogen0 = true;
	bool homogen1 = true;
	for(int i=startR; i<endR; i++){
		for(int j=startC; j<endC; j++){
			if(arr[i][j] != 1) homogen1 = false;
			if(arr[i][j] != 0) homogen0 = false;
		}
	}
	
	if(homogen0){
		return;
	} else if(homogen1){
		ans.pb("1" + code);
		return;
	} else {
		solve(startR, (startR+endR)/2, startC, (startC+endC)/2, code + "0");
		solve(startR, (startR+endR)/2, (startC+endC)/2, endC,  code + "1");
		solve((startR+endR)/2, endR, startC, (startC+endC)/2, code + "2");
		solve((startR+endR)/2, endR, (startC+endC)/2, endC,  code + "3");
	}
}

int main(){
	int r, c;
	cin >> r >> c;

	// cek 2^p and equalize
	int nearestSize = max(r, c);
	bool stop = false;
	while(!stop){
		for(int i=0; pow(2,i)<=nearestSize; i++){
			if(pow(2,i) == nearestSize){
				stop = true;
			}
		}
		if(!stop) nearestSize++;
	}

	// fill
	memset(&arr[0][0], 0, sizeof(arr));

	// in
	for(int i=0; i<nearestSize; i++){
		for(int j=0; j<nearestSize; j++){
			if(i < r && j < c){
				cin >> arr[i][j];
			}
			else arr[i][j] = 0;
		}
	}

	solve(0, nearestSize, 0, nearestSize, "");

	// out
	cout << ans.size() << endl;
	EACH(ans){
		cout << a << endl;
	}
}