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
		string s;
		cin >> s;
		ll n = s.size();
		ll dp[n + 1][n + 1];
		// memset(dp,,sizeof(dp));
		for(ll i = 0;i < n;++i){
			for(ll j = 0; j < n;++j){
				dp[i][j] = 1;
			}
		}
		// cout << dp[0][0];
		ll lens = 1;
		for(ll i = 2;i <= n;++i){
			for(ll ii = 0; ii < n - i + 1;++ii){
				ll j = ii + i - 1;
				if(s[ii] == s[j]){
					if(i == 2) dp[ii][j] = 2;
					else{
						if(ii == j - 2 || dp[ii + 1][j-1] != 1) dp[ii][j] = dp[ii + 1][j - 1] + 2;
					}
				}
				else{
					dp[ii][j] = 1;
				}
				lens = max(lens,dp[ii][j]);
			}
		}
		cout << lens<<"\n";
	}
}