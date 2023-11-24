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
    int n, m, a, winner;
    cin >> n >> m;

    int arr[n+1];
    for(int i=1; i<=n; i++){
        arr[i] = 0;
    }

    for(int i=0; i<m; i++){
        cin >> a;
        arr[a]++;
        if(i==0 || arr[a] > arr[winner] || ((arr[a] == arr[winner]) && a < winner)) {
            winner = a;
            cout << winner << endl;
        } else {
            cout << winner << endl;
        }
    }
}