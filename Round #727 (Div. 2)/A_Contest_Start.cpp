/*
*******************
Author: haochenkang
Lang: C++
All Rights Reserved
*******************
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = (int)(1e9 + 7);
const ll INF = 1e18;

void run_case(){
    ll n, x, t;
    cin >> n >> x >> t;
    if(x > t) cout << "0\n";
    else {
        if(n <= t / x) cout << n * (n - 1) / 2 << '\n';
        else cout << (t / x) * (n - t / x) + (t / x) * (t / x - 1) / 2 << '\n';
    }

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--){
        run_case();
    }
}