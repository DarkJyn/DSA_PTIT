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
    while (t--){
        string s;
        cin >> s;
        stack<char> st;
        if (s.length() % 2 == 1){
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ')' && !st.empty()){
                if (st.top() == '('){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        int k = st.size(), n = 0;
        while (!st.empty() && st.top() == '('){
            st.pop();
            n++;
        }
        cout << (k / 2 + n % 2) << endl;
    }
}