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
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		for(ll i = 0; i < n;++i){
			cin >> a[i];
			pq.push(a[i]);
		}	
		ll ans = 0;
		while(pq.size() > 1){
			ll cur1 = pq.top();
			pq.pop();
			ll cur2 = pq.top();
			pq.pop();
			pq.push(cur1 + cur2);
			ans += cur1 + cur2;
		}
		cout << ans <<"\n";
	}	
}