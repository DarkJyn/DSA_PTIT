#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n + 1];
		int maxa[n + 1];
		int mina[n + 1];
		maxa[n] = mina[n] = n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = n - 1; i >= 1; i--){
			if (a[i] > a[i + 1]){
				mina[i] = mina[i + 1];
			}
			else{
				mina[i] = i;
			}
			if (a[i] < a[i + 1]){
				maxa[i] = maxa[i + 1];
			}
			else{
				maxa[i] = i;
			}
		}
		int res = 0;
		for (int i = 1; i <= n; i++){
			res = max(res, mina[maxa[i]] - i + 1);
		}
		cout << res << endl;
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
