#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n;
    cin >> n;
    ll u[n];
    ll v[n];
    map<ll,ll> mp;
    for(ll i = 0;i < n;++i){
        cin >> u[i] >> v[i];
        mp.insert({u[i],1});
        mp.insert({v[i],1});
    }
    ll q;
    cin >> q;
    ll que[q];
    for(ll i = 0;i < q;++i){
        cin >> que[i];
        mp.insert({que[i],1});
    }
    ll idx = 1;
    for(auto x  = mp.begin();x != mp.end();++x){
       (*x).second = idx++;
    }
    ll diff[mp.size() + 5] = {0};
    for(ll i = 0;i < n;++i){
        diff[mp.find(u[i])->second]++;
        diff[mp.find(v[i])->second + 1]--;
    }
    ll a[mp.size() + 2] = {0};
    int tmp = 0;
    for(int i = 1;i <= mp.size();++i){
        tmp += diff[i];
        a[i] = tmp;
    }
    for(ll i = 0;i < q;++i){
        cout << a[mp.find(que[i])->second] <<"\n";
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
