#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;++i) cin >> a[i];
    int dp[n + 1];
    memset(dp,0,sizeof(dp));
    int maxx = -1;
    for(int i = 0;i < n;++i){
        for(int j = 0;j < i;++j){
            if(a[j] < a[i]){
                dp[i] = max(dp[i],dp[j] + 1);
            }
            else{
                dp[i] = max(dp[i],1);
            }
        }
        maxx = max(maxx,dp[i]);
    }   
    cout << maxx + 1;
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
