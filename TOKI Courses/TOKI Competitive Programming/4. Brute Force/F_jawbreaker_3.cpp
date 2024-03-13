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
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

// UNSOLVED
// Time Complexity : O(m*n)

int m, n, b, k;
int t, ans = 0;
char arr[25][25];
bool sudah[25][25];
vector<pair<int,int>> temp;		// perhitungan setiap loop
vector<pair<int,int>> result;	// hasil semua koordinat yang memiliki hasil maksimal

void solve(int b_now, int k_now){
	int target = arr[b_now][k_now];
	bool stop = true;

	sudah[b_now][k_now] = true;
	temp.pb(mp(b_now, k_now));

	// check up
	if(b_now>0 && !sudah[b_now-1][k_now] && arr[b_now-1][k_now]==target){
		t++;
		stop = false;
		solve(b_now-1, k_now);

	// check right
	} if(k_now < n-1 && !sudah[b_now][k_now+1] && arr[b_now][k_now+1] == target){
		t++;
		stop = false;
		solve(b_now, k_now+1);

	// check down
	} if(b_now < m-1 && !sudah[b_now+1][k_now] && arr[b_now+1][k_now] == target){
		t++;
		stop = false;
		solve(b_now+1, k_now);

	// check left
	} if(k_now > 0 && !sudah[b_now][k_now-1] && arr[b_now][k_now-1] == target){
		t++;
		stop = false;
		solve(b_now, k_now-1);
	}

	if(stop){
		return;
	}

}

void runtuh(int r, int c){
	if(r == 0){
		return;
	} else {
		swap(arr[r-1][c], arr[r][c]);
		runtuh(r-1, c);
	}
}

int main(){
	cin >> m >> n;

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}

	memset(&sudah[0][0], false, sizeof(sudah));

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			t = 1;
			temp.clear();
			if(!sudah[i][j]) solve(i, j);
			if(t*(t-1) >= ans){
				ans = t*(t-1);
				result = temp;
			}
		}
	}

	EACH(result){
		arr[a.first][a.second] = '.';
		runtuh(a.first, a.second);
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}