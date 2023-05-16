#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void draw(int n){
	if(n==1){
		cout << "*" << endl;
	} else{
		draw(n-1);
		for(int i=0; i<n; i++){
			cout << "*";
		}
		cout << endl;
		draw(n-1);
	}
}

int main(){
	int n;
	cin >> n;
	draw(n);
}