#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
void solve(int a[], int n){
    if(n == 0) return;
    cout <<"[";
    for(int i = 0;i < n;++i){
        cout << a[i];
        if(i != n - 1) cout << " ";
        if(i < n - 1) a[i] = a[i] + a[i + 1];
    }
    cout <<"]\n";
    solve(a,n - 1);
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        solve(a,n);
    }   
}