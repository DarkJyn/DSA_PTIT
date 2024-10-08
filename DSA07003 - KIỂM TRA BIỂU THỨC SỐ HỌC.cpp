#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stack<char> st;
        int ok = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                st.push(s[i]);
            }
            if (s[i] == ')'){
                if (st.top() == '('){
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
        if (ok){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}