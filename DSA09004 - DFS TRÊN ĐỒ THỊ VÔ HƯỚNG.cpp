#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int visited[1005];
void dfs(vector<vector<int>> lst,int u){
    cout << u <<" ";
    visited[u] = 1;
    for(int v : lst[u]){
        if(!visited[v]){
            dfs(lst,v);
        }
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        memset(visited,0,sizeof(visited));
        int v,e,u;
        cin >> v >> e >> u;
        vector<vector<int>> lst(v + 1);
        while(e--){
            int x,y;
            cin >> x >> y;
            lst[x].push_back(y);
            lst[y].push_back(x);
        }
        for(int i = 1; i <= v;++i){
            sort(lst[i].begin(),lst[i].end());
        }
        dfs(lst,u);
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
