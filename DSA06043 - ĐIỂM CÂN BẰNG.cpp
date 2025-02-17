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
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        int sum[n];
        int sum1[n];
        sum[0] = a[0];
        for(int i = 1; i < n;++i){
            sum[i] = sum[i-1] + a[i];
        }
        sum1[n - 1] = a[n - 1];
        for(int i = n - 2;i >= 0;--i){
            sum1[i] = sum1[i + 1] + a[i];
        }
        // for(int i = 0;i < n;++i){
        //     cout << sum1[i] <<" ";
        // }
        for(int i = 1;i < n-1;++i){
            // cout << sum[2] <<" "<< sum1[4] <<"\n";
            if(sum[i - 1] == sum1[i+ 1]){
                cout << i + 1 <<"\n";
                break;
            }
            if(i == n - 2) cout << "-1"<<"\n";
        }
    }
}