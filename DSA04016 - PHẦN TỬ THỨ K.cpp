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
        int n,m,k;
        cin >> n >> m >> k;
        int a[n + m];
        // int b[m];
        for(int i = 0;i < n + m;++i){
            cin >> a[i];
        }
        sort(a,a + m + n);
        cout << a[k - 1] <<"\n";
    }
}