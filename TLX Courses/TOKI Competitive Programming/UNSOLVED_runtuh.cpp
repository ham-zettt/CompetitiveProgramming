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

int main(){
	int r, c;
	cin >> r >> c;

	int arr[r][c];
	for(int i=0; i<r; i++){
		string inp;
		cin >> inp;
		for(int j=0; j<c; j++){
			arr[i][j] = int(inp[j] - '0');
		}
	}

	bool stop = false;

	while(!stop){
		stop = true;
		for(int i=0; i<r; i++){
			bool isFill = true;
			for(int j=0; j<c; j++){
				// all 1 check
				if(arr[i][j] != 1){
					isFill = false;
					stop = false;
					break;
				}
			}
			cout << "isFIll = " << isFill << endl; 
			if(isFill){
				for(int k=0; k<c; k++){
					arr[i][k] = 0;
					EACH2d(arr);
					cout << endl;
					flag:
					int idx = i;
					while(idx > 0 ){
						cout << "idx = " << idx << endl;
						swap(arr[idx][k], arr[idx-1][k]);
						idx--;
					}
					if(arr[i][k] == 0) goto flag;
				}


			}
		}
	}
	
	EACH2d(arr);
}