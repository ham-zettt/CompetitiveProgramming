#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,q;
	string x;
	cin >> n >> q;

	string name[n];
	string num[n];
	for(int i=0; i<n; i++){
		cin >> name[i] >> num[i] ;
	}


	while(q--){
		int r=n-1, l=0, mid;
		bool isFound = false;
		cin >> x;
		
		while(l<=r and !isFound){
			mid = (r+l) / 2;
			if(x == name[mid]){
				isFound = true;

			}else if(x > name[mid]){
				l = mid+1;

			}else{
				r = mid-1;
			}
		}
	if(isFound) cout << num[mid] << endl;
	else cout << "NIHIL" << endl;
	}

}