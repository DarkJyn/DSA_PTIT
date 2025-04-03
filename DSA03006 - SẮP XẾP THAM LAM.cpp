#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll n;
ll check(ll a[],ll b[]){
    for(ll i = 0;i < n;++i){
        if(a[i] != b[i] && a[i] != b[n - i - 1]) return 0;
    }
    return 1;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        cin >> n;
        ll a[n];
        ll b[n];
        for(ll i = 0; i< n;++i){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b + n);
        if(check(a,b)) cout << "Yes";
        else cout << "No";
        cout << "\n";
    }
}