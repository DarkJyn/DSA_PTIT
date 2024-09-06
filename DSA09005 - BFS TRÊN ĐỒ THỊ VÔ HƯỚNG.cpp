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
        int v, e, u, x, y;
        cin >> v >> e >> u;
        vector<int> a[v + 1], check(v + 1, 0);
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= v; i++){
            sort(a[i].begin(), a[i].end());
        }
        queue<int> q;
        q.push(u);
        check[u] = 1;
        while (q.size()){
            u = q.front();
            q.pop();
            cout << u << " ";
            for (int i = 0; i < a[u].size(); i++){
                int v = a[u][i];
                if (!check[v]){
                    q.push(v);
                    check[v] = 1;
                }
            }
        }
        cout << endl;
    }
}