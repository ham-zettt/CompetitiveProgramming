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
    int n, m, idx, inp, temp=-1;
    bool ok = false;
    ll ans = 0;
    cin >> n >> m;

    int arrA[n], arrB[m];
    double totalA=0, totalB=0;

    for(int i=0; i<n; i++){
        cin >> arrA[i];
        totalA += arrA[i];
    }
    for(int i=0; i<m; i++){
        cin >> arrB[i];
        totalB += arrB[i];
    }

    sort(arrB, arrB+m, greater<int>());
    vector<int> b;

    // vector b accumulation
    for(int i=0; i<m; i++){
        if(temp == arrB[i]) b[b.size()-1] += arrB[i];
        else b.pb(arrB[i]);
        temp = arrB[i];
    }
 
    if(totalA*n > totalB*m){
        cout << 0;
        return 0;
    }

    for(int i=0; i<b.size(); i++){
        // cout << totalA/n << endl;
        // cout << totalB/m << endl;
        totalA += b[i];
        totalB -= b[i];
        ans += b[i];
        n++;
        m--;
        
        if(totalA/n > totalB/m){
            cout << ans;
            return 0;
        }
    }

    cout << -1;
}
