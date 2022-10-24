#include <iostream>
using namespace std;

struct ident{
	string id;
	int s1,s2,s3,total;
};

void swap(ident &partic1, ident &partic2){
	ident temp = partic1;
	partic1 = partic2;
	partic2 = temp;
}

void solve(){
	int n,m;
	string idCheck;
	
	cin >> n >> m >> idCheck;
	
	ident partic[n];
	for(int i=0; i<n; i++){
		cin >> partic[i].id >> partic[i].s1 >> partic[i].s2 >> partic[i].s3;		
	}

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){

			if(partic[j].s3 > partic[i].s3){
				swap(partic[i], partic[j]);
			} else if(partic[j].s3 == partic[i].s3){

				if(partic[j].s2 > partic[i].s2){
					swap(partic[i], partic[j]);
				} else if(partic[j].s2 == partic[i].s2){

					if(partic[i].s1 > partic[i].s1){
						swap(partic[j], partic[i]);
					}
				}
			}
		}
	}

	bool isWin = false;
	for(int i=0; i<m; i++){
		if(idCheck == partic[i].id){
			isWin = true;
			break;
		}
	}

	if(isWin) cout << "YA" << endl;
	else cout << "TIDAK" << endl;

	// for(int i=0; i<n; i++){
	// 	cout << "partic -" << i << " = " <<  partic[i].s3 << endl;
	// }	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

