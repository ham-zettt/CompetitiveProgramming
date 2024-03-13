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

int n, k;
int catat[10];

void permutation(int depth){
	if(depth > k){
		for(int i=1; i<=k; i++){
			cout << catat[i] << " ";
		}
		cout << endl;

	} else {
		for(int i=catat[depth-1]+1; i<=n; i++){
			catat[depth] = i;
			permutation(depth + 1);
		}
	}
}

int main(){
	cin >> n >> k;
	permutation(1);
}