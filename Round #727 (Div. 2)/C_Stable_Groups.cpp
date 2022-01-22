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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for(auto &a : v) cin >> a;
    sort(v.begin(), v.end());

    vector<ll> gaps(n - 1);
    for(int i = 0; i < n - 1; i++) gaps[i] = max(0LL, (v[i + 1] - v[i] - 1) / x);
    sort(gaps.begin(), gaps.end());
    
    for(int i = 0; i < gaps.size(); i++){
        if(k >= gaps[i]) k -= gaps[i];
        else {
            cout << n - i;
            return;
        }
    }
    cout << 1;

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    run_case();
}