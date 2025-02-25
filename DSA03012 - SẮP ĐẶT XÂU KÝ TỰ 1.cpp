#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll sqr(ll a){
	return a*a;
}
ll poww(ll a, int n){
	if(n == 0)  return 1;
	ll x = poww(a,n / 2);
	if(n%2 == 0) return sqr(x);
	return a*sqr(x);
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char,int> mp;
		for(int i = 0;i < s.size();++i){
			mp[s[i]]++;
		}
		int ok = 1;
		for(auto x : mp){
			if(x.second * 2 > s.size() + 1){
				cout << "-1\n";
				ok = 0;
				break;
			}
		}
		if(ok) cout << "1\n";
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
