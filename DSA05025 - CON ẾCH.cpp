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
        int n;
		cin >> n;
		ll a[n] = {}, b[n];
		for (int i = 0; i < min(n, 3); i++)	a[i] = 1;
		b[0] = 1;
		for (int i = 1; i < n; i++){
			if (i <= 3){
                a[i] = (a[i] + b[i - 1]);
            }
			else{    
                a[i] += b[i - 1] - b[i - 4];
            }
			b[i] = b[i - 1] + a[i];
		}
		cout << a[n - 1] << endl;
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
