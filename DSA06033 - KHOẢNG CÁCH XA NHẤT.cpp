#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

bool cmp(pair<int, int> a, pair<int, int> b){
	if (a.first == b.first){
		return a.second > b.second;
	}
	return a.first < b.first;
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
		int n;
		cin >> n;
		pair<int, int> a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a + n);
		int ans = -1, Min = a[0].second, k = a[0].first;
		for (int i = 1; i < n; i++){
			if (a[i].first > k){
				ans = max(ans, a[i].second - Min);
            }
			if (Min > a[i].second){
				Min = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans << endl;
	}
}