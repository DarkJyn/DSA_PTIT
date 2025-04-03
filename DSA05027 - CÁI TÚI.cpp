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
		int n,w;
		cin >> n >> w;
		vector<pair<int,int>> v(n + 1);
		for(int i = 1;i <= n;++i){
			cin >> v[i].first;
		}
		for(int i = 1;i <= n;++i){
			cin >> v[i].second;
		}
		int dp[n + 1][w + 1];
		memset(dp,0,sizeof(dp));
		for(int i = 1;i <= n;++i){
			for(int j = 0;j <= w;++j){
				dp[i][j] = dp[i - 1][j];
				if(j >= v[i].first){
					dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - v[i].first] + v[i].second);
				}
			}
		}
		cout << dp[n][w] << endl;
	}	
}
/* Dean
				  __------__
				/~          ~\
			   |    //^\//^\|         Oh..My great god ...     
			 /~~\  ||  o| |o|:~\       Please give me many many
			| |6   ||___|_|_||:|    /  bananas .. 
			 \__.  /      o  \/'       
			  |   (       O   )        
	 /~~~~\    `\  \         /
	| |~~\ |     )  ~------~`\
   /' |  | |   /     ____ /~~~)\
  (_/'   | | |     /'    |    ( |
		 | | |     \    /   __)/ \
		 \  \ \      \/    /' \   `\
		   \  \|\        /   | |\___|
			 \ |  \____/     | |
			 /^~>  \        _/ <
			|  |         \       \
			|  | \        \        \
			-^-\  \       |        )
				 `\_______/^\______/-Dean
*/
