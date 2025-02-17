#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct obj{
    int v;
    int cnt;
};
bool cmp(obj a,obj b){
    if(a.cnt == b.cnt) return a.v < b.v;
    return a.cnt > b.cnt;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i = 0;i < n;++i){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<obj> b;
        for(auto x : mp){
            obj tmp;
            tmp.v = x.first;
            tmp.cnt = x.second;
            b.push_back(tmp);
        }
        sort(b.begin(),b.end(),cmp);
        for(int i = 0;i < b.size();++i){
            for(int j = 0;j < b[i].cnt;++j){
                cout << b[i].v <<" ";
            }
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
