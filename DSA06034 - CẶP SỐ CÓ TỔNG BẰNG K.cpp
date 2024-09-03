#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
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
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		ll s = 0;
		map<int, ll> m;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		for (auto i : m){
			if (i.first * 2 == k){
				s += i.second * (i.second - 1);
            }
			else{
				s += i.second * m[k - i.first];
            }
		}
		cout << s / 2 << endl;
	}
}