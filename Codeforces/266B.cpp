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
	int n, t;
	string s;
	cin >> n >> t >> s;

	char arr[n];
	strcpy(arr, s.c_str());
	
	while(t--){
		for(int i=0; i<n; i++){
			if(arr[i] == 'B' && arr[i+1] == 'G'){
				swap(arr[i], arr[i+1]);
				i++;
			}
		}
	}
	
	EACH(arr){
		cout << a;
	}
	cout << endl;
}
