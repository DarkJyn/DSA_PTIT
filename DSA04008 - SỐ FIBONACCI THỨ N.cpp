#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct matran{
	ll X[2][2];
	friend matran operator * (matran a, matran b){
		matran c;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				c.X[i][j] = 0;
				for(int k = 0; k < 2; k++){
					c.X[i][j] += a.X[i][k] * b.X[k][j];
					c.X[i][j] %= MOD;
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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		matran a;
		a.X[0][0] = 1;
		a.X[0][1] = 1;
		a.X[1][0] = 1;
		a.X[1][1] = 0;
		matran b = binpow(a,n);
		cout << b.X[1][0]<<"\n";
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
