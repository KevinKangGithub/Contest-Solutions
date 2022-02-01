#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

const int MOD = 1e9+7; 



void run_case(){
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first.first >> v[i].first.second >> v[i].second;
    // int small = v[0].first.first, big = v[0].first.second, smallprice = v[0].second, bigprice = v[0].second;
    // bool same = true;
    // for(int i = 0; i < n; i++){
    //     int curstart = v[i].first.first, curend = v[i].first.second, curcost = v[i].second;
    //     if(curend > big){
    //         big = curend, bigindex = i, bigprice = curcost;
    //     } else if(curend == big){
    //         if(curstart > small)
    //     }
    ll small = v[0].first.first, big = v[0].first.second, smallprice = v[0].second, bigprice = v[0].second, special = v[0].second;
    for(int i = 0; i < n; i++){
        ll curstart = v[i].first.first, curend = v[i].first.second, curcost = v[i].second;
        if(curstart == small && curend == big){
            special = min(special, min(curcost, smallprice + bigprice));
            smallprice = min(smallprice, curcost);
            bigprice = min(bigprice, curcost);
            cout << special << '\n';
        } else if(curstart == small && curend > big){
            big = curend, bigprice = curcost;
            smallprice = min(smallprice, curcost);
            special = curcost;
            cout << special << '\n';
        } else if(curstart < small && curend == big){
            small = curstart, smallprice = curcost;
            bigprice = min(bigprice, curcost);
            special = curcost;
            cout << special << '\n';
        } else if(curstart < small && curend > big){
            special = curcost, small = curstart, big = curend, smallprice = curcost, bigprice = curcost;
            cout << special << '\n';
        } else {
            if(curstart < small || curend > big) special = INT_MAX;
            if(curstart < small){
            small = curstart, smallprice = curcost;
            } else if(curstart == small) smallprice = min(curcost, smallprice);
            
            if(curend > big){
                big = curend, bigprice = curcost; 
            } else if(curend == big) bigprice = min(curcost, bigprice);
            cout << min(special, smallprice + bigprice) << endl;
        }
        
        // cout << min(special, smallprice + bigprice) << '\n';
        
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