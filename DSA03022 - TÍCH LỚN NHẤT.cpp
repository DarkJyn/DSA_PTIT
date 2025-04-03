#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i = 0 ;i < n;++i){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans = max(v[0] * v[1],max(v[0] * v[1] * v[n-1],max(v[n-1] * v[n-2],v[n-1]* v[n-2] * v[n - 3])));
    if(ans >0) cout << ans;
    else cout <<0;
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
