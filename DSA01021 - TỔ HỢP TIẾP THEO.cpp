#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[k];
		int b[n + 1];
		memset(b,0,sizeof(b));
		for(int i = 0;i < k;++i){
			cin >> a[i];
		}
		int idx = k - 1;
		int cnt = 0;
		while(idx >= 0 && a[idx] == n - k + idx + 1){
			idx--;
		}
		if(idx < 0){
			cnt = k;
		}
		else{
			for(int i = 0;i < k;++i){
				b[a[i]]++;
			}
			// for(int i = 1;i <= n;++i){
			// 	cout << b[i] <<" ";
			// }
			a[idx]++;
			cnt++;
			for(int i = idx + 1;i < k;++i){
				a[i] = a[i - 1] + 1;
				if(b[a[i]] == 0) cnt++;
			}
		}

		cout << cnt<<"\n";
	}
}