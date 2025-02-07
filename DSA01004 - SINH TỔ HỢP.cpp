#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(int n,int k){
    vector<int> cur(k + 2);
    for(int i = 0;i < k;++i){
        cur[i] = i + 1;
    }
    while(1){
        for(int i = 0;i < k;++i){
            cout << cur[i];
        }
        cout <<" ";
        int idx = k - 1;
        while(idx >= 0 && cur[idx] == n - k + idx + 1){
            idx--;
        }
        if(idx < 0) break;
        cur[idx]++;
        for(int i = idx + 1;i < k;++i){
            cur[i] = cur[i - 1] + 1;
        }

    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        solve(n,k);
        cout <<"\n";
    }
}