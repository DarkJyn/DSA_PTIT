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
        int v, e, u;
        cin >> v >> e >> u;
        vector<bool> check(v + 1, 1);
        vector<vector<int>> a(v + 1);
        stack<int> st;
        while (e--){
            int x,y;
			cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= v; i++){
            sort(a[i].begin(), a[i].end());
		}
        st.push(u);
        check[u] = 0;
        cout << u << " ";
        while (st.size()){
            u = st.top();
            st.pop();
            for (int i = 0; i < a[u].size(); i++){
                int v = a[u][i];
                if (check[v]){
                    cout << v << " ";
                    check[v] = 0;
                    st.push(u);
                    st.push(v);
                    break;
                }
            }
        }
        cout << endl;
    }
}