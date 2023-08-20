#include <iostream>
using namespace std;

void solve(){
	string str, sub1, sub2;
	int n;
	cin >> str >> n;

	string word[n];
	for(int i=0; i<n; i++){
		cin >> word[i];
	}

	int pos = str.find('*');
	sub1 = str.substr(0,pos);
	sub2 = str.substr(pos+1);
	
	for(int i=0; i<n; i++){
		//find sub2 on word[i]
		if(word[i].length() < str.length()-1) continue;
		if(word[i].substr(0,pos) == sub1 && word[i].substr(word[i].length() - sub2.length()) == sub2){
			cout << word[i] << endl;
		}
	}
}

int main(){
	int t=1;
	// cin >> t;
	while(t--){
		solve();
	}
}