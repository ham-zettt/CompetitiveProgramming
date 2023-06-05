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
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a;  cout << endl; }

int main(){
	int t;
	cin >> t;

	
	while(t--){
		int a, b, k;
		bool isValid = false;
		cin >> a >> b >> k;

		vector<char> vt;
		for(int i=0; i<a; i++){
			vt.pb('L');
		}
		for(int i=0; i<b; i++){
			vt.pb('P');
		}

		do{
			bool l = true, p = true;
			// EACH(vt) cout << a;
			// cout << endl;
			for(int i=0; i<vt.size(); i++){

				// cek L
				if(vt[i] == 'L'){
					// cout << "CEK L" << endl;
					int count = 0;
					for(int j=i, it=0; it<2+1; it++, j++){
						// cout << "cek: " << i << " " << j << endl;
						if(vt[j] == 'L') count++;
					}
					// cout << count << endl;
					if(count > 2){
						// cout << "L False" << endl;
						l = false;
						break;
					}
					// cout << endl;

				// cek P
				} else {
					// cout << "CEK P" << endl;
					int count = 0;
					for(int j=i, it=0; it<k+1; it++, j++){
						// cout << "cek: " << i << " " << j << endl;
						if(vt[j] == 'P') count++;
					}
					// cout << count << endl;
					if(count > k){
						// cout << "P False" << endl;
						p = false;
						break;
					}
					// cout << endl;
				}
			}
		
			// cout << "l = " << l << ", p = " << p << endl;
			if(p && l){
				// cout << "Jawaban: ";
				EACH(vt) cout << a;
				cout << endl;
				isValid = true;
				break;
			}

		} while(next_permutation(vt.begin(), vt.end()));

		if(!isValid) cout << "mustahil" << endl;
	}

}