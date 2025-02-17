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
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[m];
        map<int,int> mp1;
        map<int,int> mp2;
        map<int,int> mp3;
        for(int i = 0;i < n;++i) {
            cin >> a[i];
            mp1[a[i]]++;
            mp3[a[i]]++;
        }
        for(int i = 0;i < m;++i){
            cin >> b[i];
            mp2[b[i]]++;
            mp3[b[i]]++;
        }
        for(auto a : mp3){
            cout << a.first <<" ";
        }
        cout <<"\n";
        for(auto a : mp1){
            if(mp2[a.first] > 0) cout << a.first<<" ";
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
