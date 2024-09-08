#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD (ll)1000000007
#define vi vector;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		int s = 0;
		for(int i = 0;i < n;++i)
			for(int j = 0;j < m;++j)
				cin >> a[i][j];
		for(int j = 0;j < m;++j){
			for(int i = 1;i < n;++i){
				if(a[i][j] == 1){
					a[i][j] = a[i-1][j] + 1;
				}
			}
		}
		// for(int i = 0;i < n;++i){
		//     for(int j = 0;j < m;++j)
		//         cout << a[i][j]<<" ";
		//     cout <<"\n";
		// }
		for(int i = 0;i < n;++i){
			stack<int> st;
			int left[m+2];
			int right[m+2];
			for(int j = 0;j < m;++j){
				while(!st.empty() && a[i][j] <= a[i][st.top()]){
					st.pop();
				}
				if(st.empty()) left[j] = 0;
				else left[j] = st.top() + 1;
				st.push(j);
			}
			stack<int> dg;
			for(int j = m-1;j >= 0;--j){
				while(!dg.empty() && a[i][j] <= a[i][dg.top()]){
					dg.pop();
				}
				if(dg.empty()) right[j] = m-1;
				else right[j] = dg.top() - 1;
				dg.push(j);
			}
			for (int j = 0; j < m; j++){
                s = max(s, min(right[j] - left[j] + 1, a[i][j]));
			}
		}  
		cout << s <<endl;
	}
}