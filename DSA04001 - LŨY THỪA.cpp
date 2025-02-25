#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

ll sqr(ll a){
    return (a*a) % MOD;
}
ll poww(ll a, int n){
    if(n == 0)  return 1;
    if(n%2 == 0)    return sqr(poww(a, n/2));
    return (a*sqr(poww(a, n/2))) % MOD;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << poww(n,k) <<"\n";
    }
}