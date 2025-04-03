#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll n,k;
struct matran{
	ll X[12][12];
	friend matran operator * (matran a, matran b){
		matran c;
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j < n; j++){
				c.X[i][j] = 0;
				for(ll k = 0; k < n; k++){
					c.X[i][j] = (c.X[i][j] +  (a.X[i][k] * b.X[k][j]) % MOD) % MOD;
					// c.X[i][j] %= MOD;
				}
			}
		}
		return c;
	}
};

matran binpow(matran a, ll n){
	if(n == 1){
		return a;
	}
	matran tmp = binpow(a, n / 2);
	if(n % 2 == 1){
		return tmp * tmp * a;
	}
	else{
		return tmp * tmp;
	}
}


signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	ll t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		matran a;
		for(ll i = 0; i < n;++i){
			for(ll j = 0;j < n;++j){
				cin >> a.X[i][j];
			}
		}
		matran res = binpow(a,k);
		ll sum = 0;
		for(ll i = 0;i < n;++i){
			sum = (sum + res.X[i][n-1]) % MOD;
		}
		cout << sum <<"\n";
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
