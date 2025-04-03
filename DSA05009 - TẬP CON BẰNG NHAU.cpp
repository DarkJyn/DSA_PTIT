#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0;i < n;++i){ 
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 == 1){
            cout <<"NO" <<endl;
        }
        else{
            int dp[sum + 5];
            memset(dp,0,sizeof(dp));
            dp[0] = 1;
            for(int i = 0; i < n;++i){
                // dp[i] = 1;
                for(int j = sum;j >= a[i];j--){
                    if(dp[j - a[i]]) {
                        dp[j] = 1;
                    }
                }
            }
            if(dp[sum/2]) cout <<"YES";
            else cout << "NO";
            cout << endl;
        }
        // sort(a,a + n);
        
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
