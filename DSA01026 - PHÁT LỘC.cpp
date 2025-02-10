#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(int n){
    queue<string> q;
    q.push("8");
    while(!q.empty()){
        string tmp = q.front();
        q.pop();
        if(tmp.size() == n && tmp[n - 1] == '6'){
            cout << tmp <<"\n";
            continue;
        }
        if(tmp[tmp.size() - 1] == '8') q.push(tmp + "6");
        else{
            if(tmp.size() < 4 || !(tmp[tmp.size() - 1] == '6' && tmp[tmp.size() - 2] == '6' && tmp[tmp.size() - 3] == '6')){
                q.push(tmp + "6");
            }
            if(tmp.size() < n - 1) q.push(tmp + "8");
        }
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    solve(n);    
}