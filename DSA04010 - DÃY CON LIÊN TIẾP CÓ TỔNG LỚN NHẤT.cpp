#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

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
        int ans = 0;
        int s = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            s += x;
            ans = max(ans, s);
            if (s < 0)
                s = 0;
        }
        cout << ans << endl;
    }
   
}