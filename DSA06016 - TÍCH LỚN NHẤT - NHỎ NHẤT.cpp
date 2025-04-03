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
		ll n,m;
		cin >> n >> m;
		ll a[n];
		ll b[m];
		for(ll i = 0;i < n;++i){
			cin >> a[i];
		}
		for(ll i = 0;i < m;++i){
			cin >> b[i];
		}
		ll max1 = a[0];
		for(ll i = 1;i < n;++i){
			if(max1 < a[i]) max1 = a[i];
		}
		ll min1 = b[0];
		for(ll i = 1;i < m;++i){
			if(min1 > b[i]) min1 = b[i];
		}
		cout << max1 * min1 << endl;
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
