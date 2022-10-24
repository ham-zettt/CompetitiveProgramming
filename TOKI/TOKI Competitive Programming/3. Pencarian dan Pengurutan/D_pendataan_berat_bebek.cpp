#include <iostream>
using namespace std;

int binser(int arr[], int &n, int &search){
	int l=0, r=n-1, mid, idx = -1;

	while(l<=r && idx==-1){
		mid = (r+l)/2;
			if(search >= arr[mid]){
				l = mid+1;
				if(l>n-1) return l;
				if(search < arr[l]) idx = l;
			} else if(search < arr[mid]){
				r = mid-1;
				if(r < 0) return 0;
				if(search > arr[r]) idx = r+1;
			}
	}
	return idx;
}

int main(){
	int n, q, x, y, idxX, idxY;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cin >> q;
	for(int i=0; i<q; i++){
		cin >> x;
		idxX = binser(arr, n, x);
		cin >> y;
		idxY = binser(arr, n, y);

		cout << idxY-idxX << endl;
	}
}
