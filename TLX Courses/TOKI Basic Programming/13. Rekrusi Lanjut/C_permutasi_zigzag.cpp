#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	bool isZZ = false;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		arr[i] = i+1;
	}

	do{
		if(n>=3){
			for(int i=0; i<n-2; i++){
				isZZ = (arr[i+1]>arr[i] && arr[i+1]>arr[i+2]) || (arr[i+1]<arr[i] && arr[i+1]<arr[i+2]);
				if(!isZZ) break;	
			}
		} else{
			isZZ = true;
		}

		if(isZZ){
			for(int i : arr){
				cout << i;
			}
			cout << endl;
		}

	}while(next_permutation(arr, arr+n));
}