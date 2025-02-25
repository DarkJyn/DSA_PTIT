#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(ll n){
    queue<ll> q;
    q.push(1);
    int cnt = 0;
    // cnt++;
    while(q.size()){
        ll cur = q.front();
        q.pop();
        cnt++;
        // cout << cur <<" ";
        if(cur * 10 <= n) q.push(cur * 10);
        if(cur * 10  + 1 <= n) q.push(cur * 10 + 1);
    }
    cout << cnt;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        solve(n);
        cout <<"\n";
    }
}