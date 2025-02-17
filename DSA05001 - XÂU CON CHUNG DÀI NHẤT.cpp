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
        string a,b;
        cin >> a >> b;
        int asize = a.size();
        int bsize = b.size();
        a = " " + a;
        b = " " + b;
        int dp[asize + 2][bsize + 2];
        memset(dp,0,sizeof(dp));
        for(int i = 1;i <= asize;++i){
            for(int j = 1;j <= bsize;++j){
                if(a[i] == b[j]){
                    dp[i][j] = max(dp[i][j],dp[i-1][j-1] + 1);
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout << dp[asize][bsize] <<"\n";
    }
}