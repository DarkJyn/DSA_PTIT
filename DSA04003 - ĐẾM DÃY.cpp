#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define mod 123456789
#define vi vector;

ll poww(ll n, ll k)
{
    if (k == 1) return n;
    ll x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % mod;
    return (((x * x) % mod) * n) % mod;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << poww(2, n - 1) << endl;
    }
}