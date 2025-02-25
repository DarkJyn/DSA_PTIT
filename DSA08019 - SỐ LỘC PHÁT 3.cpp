#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(ll n){
    queue<string> q;
    stack<string> st;
    q.push("6");
    q.push("8");
    while(q.size()){
        string cur = q.front();
        st.push(cur);
        q.pop();
        if(cur.size() == n){
            continue;
        }
        q.push(cur + "6");
        q.push(cur + "8");    
    }
    cout << st.size() <<"\n";
    while(st.size()){
        cout << st.top() <<" ";
        st.pop();
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 0) cout << 0;
        solve(n);
        cout <<"\n";
    }
}