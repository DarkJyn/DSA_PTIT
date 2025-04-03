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
        int n,s;
        cin >> n >> s;
        int a[n];
        int sum = 0;
        for(int i = 0;i < n;++i){
            cin >> a[i];
            sum += a[i];
        }
        int dp[s + 5] = {0};
        dp[0] = 1;
        for(int i = 0;i < n;++i){
            for(int j = a[i];j <= s;++j){
                dp[j] = dp[j - a[i]];
            }
        }
        // for(int i = 0;i <= s;++i) cout << dp[i] <<" ";
        if(dp[s] && sum >= s) cout << "YES";
        else cout <<"NO";
        cout <<"\n";
    }
}