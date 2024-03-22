#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <queue>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

// PROBLEM 9.3 Kado Iseng di buku pemkot TOKI 


int main(){
	int n=5;
	int kado[n+1][n+1] = {{0,0,0}, {2,3,5}, {3,7,9}, {9,12,63}, {11,15,212}, {237,427,953}};
	int arr[] = {2,4,3,1,2};

	int dp[n];
	fill(dp, dp+n, 1);

	dp[0] = 1;
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			bool isGreat = true;
			for(int k=0; k<3; k++){
				if(kado[i][k] <= kado[j][k]) isGreat = false;
				break;
			}
			if(isGreat){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	
	EACH(dp) cout << a << " ";
}