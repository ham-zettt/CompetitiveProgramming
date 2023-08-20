#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0; i<n; i++) cout << arr[i] << " ";
}

int main(){
	int n, pos=0, neg=0, zero=0;
	vector<int> ans;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i] > 0) pos++;
		else if(arr[i] < 0) neg++;
		else if(arr[i] == 0) zero++;
	}

	if(pos==n || neg==n || zero==n) printArray(arr,n);
	else if((abs(pos-neg)==0 && zero==0) || abs(pos-neg)==1 && zero==0){

		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if( (neg>pos && ((i%2==0 && arr[j]<0) || (i%2==1 && arr[j]>0)))
					|| (neg<=pos && ((i%2==0 && arr[j]>0) || (i%2==1 && arr[j]<0))) ){
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
						break;
				} 
			}
		}
		
		printArray(arr,n);
	
	} else if( abs((n-zero)-zero)==0 || abs((n-zero)-zero)==1){
		int idx = 0;

		if((n-zero)>zero){

			for(int i=0; i<n; i+=2){
				for(int j=idx; j<n; j++){
					if(arr[j]!=0){
						cout << arr[j] << " ";
						idx = j+1;
						break;
					}
				}
				if(i != n-1) cout << "0 ";
			}

		} else{
			for(int i=1; i<n; i+=2){
				cout << "0 ";
				for(int j=idx; j<n; j++){
					if(arr[j]!=0){
						cout << arr[j] << " ";
						idx = j+1;
						break;
					}
				}
			}
			cout << "0 ";
		}

	} else{
		cout << "mustahil";
	}
}
