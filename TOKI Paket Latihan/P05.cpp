#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
	int n, idx, ans=0;
	bool flag=0;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for(int i=0; i<n; i++){
		flag = 0;
		idx = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[idx]){
				flag = 1;
				idx = j;
			}
		}
		swap(arr[i], arr[idx]);
		if(flag) ans++;
	}

	cout << ans;
}