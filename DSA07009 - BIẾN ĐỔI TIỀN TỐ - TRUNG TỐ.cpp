#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

string ts = "+-*/";

bool check(char c){
    for (int i = 0; i < ts.size(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}
bool Var(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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
        string k;
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--){
            if (check(s[i])){
                k = '(' + st.top();
                st.pop();
                k += s[i];
                k = k + st.top() + ')';
                st.pop();
                st.push(k);
            }
            else{
                st.push(string(1, s[i]));
            }
        }
        cout << st.top() << endl;
    }
}