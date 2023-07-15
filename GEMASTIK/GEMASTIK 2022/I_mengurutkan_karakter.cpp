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

int main(){
	int n, count=0;
	string a, b;
	cin >> n >> a >> b;

	for(int i=0; i<n; i++){
		if(b[i] < a[i]){
			while(b[i] <= a[i] && i<n){
				i++;
			}
			count++;
			i--;
		}
	}
	cout << count;
}