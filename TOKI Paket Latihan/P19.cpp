#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }

int main(){
	int n, total_q=0;
	cin >> n;

	int total_dic[n];
	string query, dic[n];
	for(int i=0; i<n; i++){
		cin >> dic[i];
		total_dic[i] = 0;
	}
	
	cin >> query;

	for(int i=0; i<query.length(); i++){
		total_q += query[i];
		pair<string,int> minn = {"",INT_MAX}; // untuk mencari string dg nilai minimum
		for(int j=n-1; j>=0; j--){
			if(dic[j].length()-1 < i) continue;	// jika kata dikamus lebih pendek drpd query, skip agar tdk out bounds
			
			total_dic[j] += min(abs(query[i]-dic[j][i]), 26-abs(query[i]-dic[j][i]));
			if(total_dic[j] <= minn.second){
				minn.second = total_dic[j];
				minn.first = dic[j];
			}
		}
		cout << minn.first.substr(0,i+1) << endl;
	}

}