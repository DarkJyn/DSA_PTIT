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
        map<char,ll> mp1;
        for(ll i = 0;i < s.size();++i){
            mp1[s[i]]++;
        }
        ll k = mp1.size();
        ll start = 0;
        ll ans = 1e6;
        map<char,ll> mp;
        int x = 0;
        for(ll i = 0;i < s.size();++i){
            mp[s[i]]++;

            if(mp[s[i]] == 1) x++;
            if(x == k){
                while(mp[s[start]] > 1){
                    mp[s[start]]--;
                    start++;
                }
                ll tmp = i - start + 1;
                ans = min(ans,tmp);
            }
        }
        cout << ans<<"\n";
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
