#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(int n){
    queue<pair<string,int>> q;
    q.push({"1",1});
    while(q.size()){
        pair<string,int> psi = q.front();
        q.pop();
        cout << psi.first <<" ";
        if(psi.second * 2 <= n) q.push({psi.first + "0",psi.second * 2});
        if(psi.second * 2 + 1 <= n) q.push({psi.first + "1",psi.second * 2 + 1});
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