#include <iostream>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        cout << s[i];
        if(i != s.length()-1){
            cout << " ";
        }
    }
}