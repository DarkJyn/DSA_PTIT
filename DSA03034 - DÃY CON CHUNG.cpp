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
        int n,m,k;
        cin >> n >> m >> k;
        int a[n];
        int b[m];
        int c[k];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        for(int i = 0;i < m;++i){
            cin >> b[i];
        }
        for(int i = 0;i < k;++i){
            cin >> c[i];
        }
        int i = 0;
        int j = 0;
        int l = 0;
        int cnt = 0;
        while(i < n && j < m && l < k){
            if(a[i] < b[j]) i++;
            else if(b[j] < c[l]) j++;
            else if(c[l] < a[i]) l++;
            if(a[i] == b[j] && a[i] == c[l]){
                cout << a[i] <<" ";
                // cout << i << j << l;
                cnt++;
                i++;
                j++;
                l++;
            }
        }
        if(cnt == 0) cout << "NO";
        cout << "\n";
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
