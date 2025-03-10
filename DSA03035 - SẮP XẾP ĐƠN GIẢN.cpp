#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int dp[100005];
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    int res = 0;
    for(int i = 0; i < n;++i){
        cin >> a[i];
        dp[a[i]] = dp[a[i] - 1] + 1;
        res = max(res,dp[a[i]]);
    }    
    cout <<n -  res;
}
