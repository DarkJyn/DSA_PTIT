#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(int n){
    queue<ll> q;
    q.push(9);
    while(q.size()){
        int cur = q.front();
        q.pop();
        if(cur % n == 0){
            cout << cur;
            return;
        }
        q.push(cur * 10);
        q.push(cur * 10 + 9);    
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 0) cout << 0;
        else solve(n);
        cout <<"\n";
    }
}