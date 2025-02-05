#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,q;
    cin >> n >> q;
    int a[n + 2];
    for(int i = 0;i < n;++i){
        cin >> a[i];
    }
    int sum[n + 2];
    memset(sum,0,sizeof(sum));
    sum[0] = a[0] * (a[0] > 0);
    for(int i = 1;i < n;++i){
        sum[i] = sum[i - 1] + (a[i] * (a[i] > 0));
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << sum[r-1] - (l!=1 )*sum[l - 2]<<"\n";
    }
}