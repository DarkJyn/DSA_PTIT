#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        sort(a,a + n);
        for(int i = n - 1;i >= n - k;--i){
            cout << a[i] <<" ";
        }
        cout <<"\n";
    }
}