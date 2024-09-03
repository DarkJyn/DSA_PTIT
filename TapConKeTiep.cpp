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
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        for(int i = 1;i <= k;++i) cin >> a[i];
        int idx = k;
        while(idx >= 1 && a[idx] == n - k + idx){
            idx--;
        }
        if(idx == 0){
            for(int i = 0;i < k;++i){
                cout << i + 1<<" ";
            }
        }
        else{
            a[idx]++;
            for(int j = idx + 1;j <= k;++j){
                a[j] = a[j-1] + 1;
            }
            for(int i = 1;i <= k;++i) cout << a[i] <<" ";
        }
        cout <<"\n";
    }
}