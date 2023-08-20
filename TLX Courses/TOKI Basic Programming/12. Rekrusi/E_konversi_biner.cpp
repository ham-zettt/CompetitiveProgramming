#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string biner(int n){
	if(n==1) return "1";
	else if(n%2==0) return biner(n/2) + "0";
	else return biner(n/2) + "1";
}

int main(){
	int n;
	cin >> n;
	cout << biner(n);
}