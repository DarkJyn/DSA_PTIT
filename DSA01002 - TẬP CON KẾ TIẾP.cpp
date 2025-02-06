#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int cur[k];
        for(int i = 0;i < k;++i) cin >> cur[i];
        int idx = k - 1;
        while(idx >= 0 && cur[idx] == n + idx - k + 1){
            idx--;
        }
        if(idx < 0){
            for(int i = 0;i < k;++i){
                cout << i + 1 <<" "; 
            }
            cout <<"\n";
        }
        else{
            cur[idx]++;
            for(int i = idx + 1;i < k;++i){
                cur[i] = cur[i - 1] + 1;
            }
            for(int i = 0;i < k;++i){
                cout << cur[i] <<" ";
            }
            cout <<"\n";
        }
    }    
}