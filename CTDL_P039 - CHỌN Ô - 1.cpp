#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int n, a[25][25];
int u[25], v[25], current[25], way[25];

int hungarian(){
    vector<int> minv(n + 1);
    vector<bool> used(n + 1);

    for(int i = 1; i <= n; i++) {
        current[0] = i;
        fill(minv.begin(), minv.end(), INT_MAX);
        fill(used.begin(), used.end(), false);
        int idx = 0;
        do{
            used[idx] = true;
            int x = current[idx];
            int delta = INT_MAX;
            int markidx;

            for (int j = 1; j <= n;j++){
                if (!used[j]){
                    int tmp = -a[x][j] - u[x] - v[j];
                    if(tmp < minv[j]) {
                        minv[j] = tmp;
                        way[j] = idx;
                    }
                    if(minv[j] < delta) {
                        delta = minv[j];
                        markidx = j;
                    }
                }
            }

            for (int j = 0; j <= n; j++){
                if (used[j]){
                    u[current[j]] += delta;
                    v[j] -= delta;
                }
                else {
                    minv[j] -= delta;
                }
            }
            idx = markidx;
        } while (current[idx] != 0);

        do{
            int j1 = way[idx];
            current[idx] = current[j1];
            idx = j1;
        } while (idx);
    }
    return v[0];
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        memset(a,0,sizeof(a));
        memset(u,0,sizeof(u));
        memset(v,0,sizeof(v));
        memset(current,0,sizeof(current));
        memset(way,0,sizeof(way));
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        cout << hungarian() << endl;
    }
}