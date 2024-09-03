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
        int n;
        cin >> n;
        int a[n + 2];
        int min1 = 1e9;
        int min2 = 1e9;
        for(int i = 0;i < n;++i){
            cin >> a[i];
            min1 = min(min1,a[i]);
        }
        for(int i = 0;i < n;++i){
            if(a[i] < min2 && a[i] > min1){
                min2 = a[i];
            }
        }
        if(min2 == 1e9) cout <<"-1";
        else cout << min1 <<" "<<min2;
        cout <<"\n";
    }
}