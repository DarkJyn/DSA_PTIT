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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;++i) cin >> a[i];
        int idx = 0;
        while(idx < n - 1 && a[idx + 1] > a[idx]){
            idx++;
        }
        if(idx == n - 1) cout << 0;
        else cout << idx + 1;
        cout << "\n";
    }   
}