#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = (int)(1e9 + 7);
const ll INF = 1e18;

void run_case(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) v.push_back(make_pair(a[i], b[i]));
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(v[i].first <= k) k += v[i].second;
        else break;
    }
    cout << k << '\n';

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--){
        run_case();
    }
}