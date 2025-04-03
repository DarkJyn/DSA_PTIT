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
        int b[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b + n);
        int l = 0;
        int r = n;
        for(int i = 0;i < n;++i){
            if(a[i] != b[i]){
                l = i;
                break;
            }
        }
        for(int i = n - 1;i >= 0;--i){
            if(a[i] != b[i]){
                r = i;
                break;
            }
        }
        cout << l  + 1<<" " <<1 +  r<<"\n";
    }
}