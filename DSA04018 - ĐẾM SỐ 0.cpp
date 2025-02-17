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
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0;i < n;++i){
            cin >> a[i];
        }
        ll *x = lower_bound(a,a + n,1);
        cout << x - a <<'\n';
    }
}