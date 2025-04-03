#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
long long poww(long long n, long long k){
    if (k == 1) return n;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    else return (((x * x) % MOD) * n) % MOD;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    while(1){
        ll n,k;
        cin >> n >> k;
        if(n == 0 && k == 0) return 0;
        if(k == 0) cout << 1 <<endl;
        else{
            cout << poww(n,k) << endl;
        }
    }
}