#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll dp[n + 5] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for(ll i = 2;i <= n;++i){
            for(ll j = 1;j <= k;++j){
                if(i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
        cout << dp[n] <<"\n";
    }
}