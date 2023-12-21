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
    int n, idx=0, count=0;
    ll arr[]={1,1,1}, ans=0;
    cin >> n;

    n--;
    while(n>0){
        arr[0] = arr[0]*10 + 1;
        arr[1] = 1;
        arr[2] = 1;
        n--;
        while(arr[0] != arr[1] && n>0){
            arr[1] = arr[1]*10 + 1;
            arr[2] = 1;
            n--;
            while(arr[1] != arr[2] && n>0){
                arr[2] = arr[2]*10 + 1;
                n--;
            }
        }
    }

    EACH(arr) ans += a;
    cout << ans;

}

// 1 1 1

// 11 1 1
// 11 11 1
// 11 11 11

// 111 1 1
// 111 11 1
// 111 11 11
// 111 111 1
// 111 111 11
// 111 111 111