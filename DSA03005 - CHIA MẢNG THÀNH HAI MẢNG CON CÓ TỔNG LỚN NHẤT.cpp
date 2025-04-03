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
        for(ll i = 0;i < n;++i) cin >> a[i];
        sort(a, a + n);
        k = min(k,n-k);
        ll sum = 0;
        for(ll i = 0;i < k;++i) sum += a[i];
        ll sum1 = 0;
        for(ll i = k;i < n;++i) sum1 += a[i];
        cout << abs(sum1 - sum) <<"\n";
    }
}