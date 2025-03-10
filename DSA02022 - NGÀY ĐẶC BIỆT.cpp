#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    vector<string> a1 = {"02", "20", "22"};
    vector<string> a2 = {"02"};
    vector<string> a3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (int i = 0; i < a1.size(); i++)
        for (int j = 0; j < a2.size(); j++)
            for (int k = 0; k < a3.size(); k++)
                cout << a1[i] + "/" + a2[j] + "/" + a3[k] << endl;
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
