#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define EACH(arr) for(auto a: arr)
using namespace std;

int main(){
	int n, a;
	int arr[3] = {0,0,0};
	cin >> n;
	for(int i=0; i<n; i++){
			for(int j=0; j<3; j++){
			cin >> a;
			arr[j] += a;
;		}
	}
	if(arr[0]==0 && arr[1]==0 && arr[2]==0) printf("YES\n");
	else printf("NO\n");
}