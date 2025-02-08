#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
vector<vector<int>> solve(int n){
	vector<vector<int>> v;
	vector<int> current(n + 2);

}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cur[n];
		for(int i = 0;i < n;++i) cin >> cur[i];
		int a[n];
		for(int i = 0;i < n;++i) a[i] = i + 1;
		int cnt = 1;
		do{
			int check = 1;
			for(int i = 0;i < n;++i){
				if(a[i] != cur[i]) {
					check = 0;
					break;
				}
				// cout << a[i] <<" ";
			}
			if(check==0){
				cnt++;
			}
			else{
				break;
			}
		}while(next_permutation(a,a + n));
		cout << cnt <<"\n";
	}
}