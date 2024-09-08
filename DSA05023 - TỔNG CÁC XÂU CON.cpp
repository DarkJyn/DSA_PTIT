#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int t;
    cin >> t;
    while (t--){
        string a;
        cin >> a;
        ll ans = 0;
		ll k = 1;
		ll n = a.size();
        for (int i = a.size() - 1; i >= 0; i--){
			ll s;
            s = (long long)(a[i] - '0') * k;
            s *= n;
            ans += s;
            k = k * 10 + 1;
            n--;
        }
        cout << ans << endl;
    }
}