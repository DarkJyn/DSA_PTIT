#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(ll i = 0;i < n;++i){
            cin >> a[i];
        }
        ll cnt = 0;
        sort(a,a + n);
        // 1 2 4 10
        for(ll i = 0;i < n;++i){
            ll *x = lower_bound(a + i,a + n,a[i] + k);
            // if(x == a + n) continue;
            cnt += x - a - i - 1;
        }
        cout << cnt<<"\n";
    }
}