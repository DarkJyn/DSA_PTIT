#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<vector<int>> v;

void solve(vector<int>a, int n){
    if(n == 0) return;
    v.push_back(a);
    // cout <<"[";
    for(int i = 0;i < n;++i){
        // cout << a[i];
        // if(i != n - 1) cout << " ";
        if(i < n - 1) a[i] = a[i] + a[i + 1];
    }
    // cout <<"]\n";
    solve(a,n - 1);
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        v.clear();
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        solve(a,n);
        for(int i = n - 1; i >= 0; --i){
            cout <<"[";
            for(int j = 0;j < n - i;++j){
                cout << v[i][j];
                if(j != n - i - 1) cout << " ";
                
            }
            cout <<"] ";
        }
        cout <<"\n";
    }   
}