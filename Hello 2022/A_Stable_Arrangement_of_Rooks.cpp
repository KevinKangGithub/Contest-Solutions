#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

const int MOD = 1e9+7; 

void run_case(){
    int n, k;
    cin >> n >> k;
    if(k > (n + 1) / 2){
        cout << "-1\n";
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && i % 2 == 0 && k > 0){
                cout << "R";
                --k;
            }
            else cout << ".";
        }
        cout << endl;
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