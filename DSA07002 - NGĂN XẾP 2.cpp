#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    stack<int> st;
    while (t--){
        string s;
        cin >> s;
        if (s == "PUSH"){
            int n;
            cin >> n;
            st.push(n);
        }
        else if (s == "POP"){
            if (st.size())
                st.pop();
        }
        else if (s == "PRINT"){
            if (st.size()){
                cout << st.top() << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }
    }
}