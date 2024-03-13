#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <limits.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define EACH(arr) for(auto &a: arr)
#define EACH2d(arr) for(auto& row: arr){ for(auto& a: row) cout << a << "";  cout << endl; }
#define EACHpair(pr) for(auto& a: pr){ cout << a.first << " " << a.second << endl; }

int main(){
    ll t, n;
    double ans, ans2, i;
    cin >> t;

    while(t--){
        ans = 0; 
        ans2 = 0;
        cin >> n;
            
        i = 0;
        do {
            i++;
            ans = i/2*(2*4+(i-1)*4);
            cout << ans << endl;
        } while(4+i*4 <= n);

        i = 0;
        do {
            i++;
            if(int(7+i*7) % 28 == 0) continue;
            ans2 = i/2*(2*7+(i-1)*7);
            cout << ans2 << endl;
        } while(7+i*7 <= n);

        cout << ans+ans2 << endl;
    }
}

// i=1
// 4 
// ans = 4
// ans2 = 7

// i=2
// ans = 12
// ans2 = 14

// 4 8 -> Sn 
// 7