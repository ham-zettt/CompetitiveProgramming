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
    int n, idx, ans=0, count=0;
    bool isFound;
    string s;
    vector<pair<char,int>> pr;

    cin >> n >> s;

    for(int i=0; i<n; i++){
        idx = i;
        count = 0;
        while(s[idx] == s[i]){
            count++;
            idx++;
        }

        isFound = false;
        EACH(pr){
            if(a.first == s[i]){
                a.second = max(a.second, count);
                isFound = true;
                break;
            }
        }

        if(!isFound) pr.pb(mp(s[i], count));    
        i += idx-i-1;
    }

    EACH(pr) ans += a.second;
    cout << ans;
}