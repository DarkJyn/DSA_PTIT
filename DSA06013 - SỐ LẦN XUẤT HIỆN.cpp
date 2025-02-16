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
        int n,x;
        cin >> n >> x;
        // int a[n];
        map<int,int> mp;
        for(int i = 0;i < n;++i){
            int tmp;
            cin >> tmp;
            mp[tmp]++;
        }
        if(mp[x] == 0) cout << -1;
        else cout << mp[x];
        cout << "\n";
    }
}