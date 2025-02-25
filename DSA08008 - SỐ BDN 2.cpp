#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(ll n){
    queue<ll> q;
    q.push(1);
    while(q.size()){
        ll cur = q.front();
        q.pop();
        if(cur % n == 0){
            cout << cur;
            return;
        }
        q.push(cur * 10);
        q.push(cur * 10 + 1);    
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
        else solve(n);
        cout <<"\n";
    }
}