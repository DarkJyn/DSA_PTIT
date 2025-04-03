#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
ll lens[94];

// 0
// 1
// 01
void pre(){
    lens[1] = 1;
    lens[2] = 1;
    for(ll i = 3;i < 93;++i){
        lens[i] = lens[i-2] + lens[i-1];
    }
}
void Try(ll n, ll k){
    if(n == 1) cout << 0;
    else if(n == 2) cout << 1;
    else{
        if(k <= lens[n - 2]){
            Try(n - 2,k);
        }
        else{
            Try(n - 1,k - lens[n - 2]);
        }
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    pre();
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        Try(n,k);
        cout << endl;
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
