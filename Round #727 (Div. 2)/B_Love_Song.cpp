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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> prefixSum(n + 1, 0);
    for(int i = 0; i < s.size(); i++){
        prefixSum[i + 1] = prefixSum[i] + s[i] - 'a' + 1;
    }
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l - 1] << '\n';
    }

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    run_case();
}