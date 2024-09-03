#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

bool Var(char c){
    return (c >= '1' && c <= '9');
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int st[s.size()] = {}, p = -1;
        for (int i = 0; i < s.size(); i++){
            if (Var(s[i])){
                st[++p] = s[i] - '0';
            }
            if (s[i] == '*'){
                st[p - 1] *= st[p];
                p--;
                continue;
            }
            if (s[i] == '/'){
                st[p - 1] /= st[p];
                p--;
                continue;
            }
            if (s[i] == '+'){
                st[p - 1] += st[p];
                p--;
                continue;
            }
            if (s[i] == '-'){
                st[p - 1] -= st[p];
                p--;
                continue;
            }
        }
        cout << st[0] << endl;
    }
}