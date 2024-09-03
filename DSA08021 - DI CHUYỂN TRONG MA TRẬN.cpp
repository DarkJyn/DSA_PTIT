#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

struct point{
    int x, y, s;
};

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--){
        int n, m, ans = 1e9;
        cin >> n >> m;
        vector<vector<bool>> check(n + 1, vector<bool>(m + 1, 1));
        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        point st, k;
        queue<point> q;
        st.x = st.y = 1;
        st.s = 0;
        q.push(st);
        while (q.size()){
            st = q.front();
            q.pop();
            if (st.x == n && st.y == m){
                ans = min(ans, st.s);
            }
            k = st;
            k.s++;
            if (st.x + a[st.x][st.y] <= n && check[st.x + a[st.x][st.y]][st.y]){
                check[st.x + a[st.x][st.y]][st.y] = 0;
                k.x += a[st.x][st.y];
                q.push(k);
                k.x -= a[st.x][st.y];
            }
            if (st.y + a[st.x][st.y] <= m && check[st.x][st.y + a[st.x][st.y]]){
                check[st.x][st.y + a[st.x][st.y]] = 0;
                k.y += a[st.x][st.y];
                q.push(k);
                k.y -= a[st.x][st.y];
            }
        }
        if (ans == 1e9){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }
}