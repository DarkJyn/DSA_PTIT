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
        sort(a,a + n);
        // for(ll i = 0;i < n;++i){
        //     cout << a[i] <<" ";
        // }
        ll check = 0;
        for(ll i = 0;i < n - 2;++i){
            for(ll j = i + 1;j < n - 1;++j){
                ll *x = lower_bound(a + j,a + n,sqrt(a[i] * a[i] + a[j] * a[j]));
                // if(i == 1) cout << a[i] <<" " << a[j] <<" ";
                if(x == a + n){
                    continue;
                }
                else{
                    if(a[i] * a[i] + a[j] * a[j] == a[x - a] * a[x - a]){
                        check = 1;
                        break;
                    }
                }
                
            }
            if(check) break;
        }
        if(check) cout <<"YES";
        else cout << "NO";
        cout << endl;
    }
}