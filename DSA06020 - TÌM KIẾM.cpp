#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        int check = -1;
        for(int i = 0;i < n;++i){
            cin >> a[i];
            if(a[i] == x) check = 1;
        }
        cout << check <<"\n";
    }
    
}