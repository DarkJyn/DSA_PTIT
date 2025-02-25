#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
ll c(ll n, ll k){
	long long ans = 1;
	for (ll i = 1; i <= k; i++, n--)
		ans = ans * n / i;
	return ans;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        int a[n+2][m+2];
        for(int i = 0;i < n;++i){
            for(int j = 0;j < m;++j){
                cin >> a[i][j];
            }
        }
        cout << c(m+n-2,n-1);
        cout << "\n";
    }
    
}