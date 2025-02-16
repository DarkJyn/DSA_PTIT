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
        for(int i = 0; i < n;++i){
            cin >> a[i];
        }
        sort(a,a + n);
        // int i = 0;
        // int j = n - 1;
        // n = 10
        //0 1 2 3 4 5 6 7 8 9
        // 0 2 4
        for(int i = 0;i < n;++i){
            if(i % 2 == 0){
                cout << a[n - i/2 - 1] <<" ";
            }
            else{
                cout << a[i/2]<<" ";
            }
        }
        cout <<"\n";
    }
}