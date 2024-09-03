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
		ll s = 0;
		cin >> n >> k;
		ll a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
        }
		sort(a, a + n);
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				int x = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
				s += x - j - 1;
			}
		}
		cout << s << endl;
	}
}