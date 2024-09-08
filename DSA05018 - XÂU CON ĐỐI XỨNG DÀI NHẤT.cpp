#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int n = s.size();
		int ans = 1;
		bool a[n + 2][n + 2];
		for (int i = 0; i < n; i++){
			a[i][i] = 1;
		}
		for (int lens = 1; lens < n; lens++){
			for (int i = 0; i < n - lens; i++){
				int k = lens + i;
				if((i + 1 > k - 1 || a[i + 1][k - 1]) && s[i] == s[k]){
					a[i][k] = true;
				}
				else a[i][k] = false;
				if(a[i][k]){
					ans = lens + 1;
				}
			}
		}
		cout << ans << endl;
	}
}