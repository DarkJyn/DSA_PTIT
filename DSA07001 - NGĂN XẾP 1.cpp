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
    int n;
    string s;
    stack<int> st;
    while (cin >> s){
        if (s == "push"){
            cin >> n;
            st.push(n);
        }
        else if (s == "pop") st.pop();
        else if (s == "show"){
            if (st.size()) {
                stack<int> q;
                while (st.size()) {
                    q.push(st.top());
                    st.pop();
                }
                while (q.size()) {
                    cout << q.top() << " ";
                    st.push(q.top());
                    q.pop();
                }
                cout << endl;
            }
            else{
                cout << "empty" << endl;
            }
        }
    } 
}