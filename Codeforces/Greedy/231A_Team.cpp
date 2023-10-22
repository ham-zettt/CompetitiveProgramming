#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << " ";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

bool sort_second(pair<int,int> &a, pair<int,int> &b){
    return b.second > a.second;
}

int main(){
    int n, a, b, c, ans=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2) ans++;
    }

    cout << ans;
}
