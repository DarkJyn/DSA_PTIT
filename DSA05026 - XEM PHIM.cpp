#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int C,n;
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // int C,n;
    cin >> C >> n;
    // vector<int> v;
    int a[n + 1];
    for(int i = 1;i <= n;++i){
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(C + 1, 0));
    for(int i = 1;i <= n;++i){
        for(int j = 1; j <= C;++j){
            if(a[i] <= j){
                dp[i][j] = max(dp[i - 1][j - a[i]] + a[i],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][C];
}