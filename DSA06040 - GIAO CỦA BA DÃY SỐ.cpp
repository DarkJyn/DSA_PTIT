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
        int a[n],b[m],c[k];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        for(int i = 0;i < m;++i){
            cin >> b[i];
        }
        int check = 1;
        for(int i = 0;i < k;++i){
            cin >> c[i];
        }
        int i = 0;
        int j = 0;
        int l = 0;
        vector<ll> v;
        while(i < n && j < m && l < k){
            if(a[i] == b[j] && a[i] == c[l]) {
                v.push_back(a[i]);
                i++;
                j++;
                l++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else if(b[j] < c[l]) j++;
            else l++;
        }

        if(v.empty()) cout <<"-1";
        else{
            for(auto x : v) cout << x <<" ";
        }
        cout <<"\n";
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
