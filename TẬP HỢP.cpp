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
    while(1){
        int n,k,s;
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        int high = (n + n - k + 1)*k/2;
        int low = (k + 1)*k/2;
        if(k > n || s < low || s > high){
            cout <<"0\n";
            continue;
        }
        int a[n+2];
        for(int i = 1;i <= k;++i){
            a[i] = i;
        }
        int cnt = 0;
        while(1){
            int sum = 0;
            for(int i = 1;i <= k;++i){
                sum += a[i]; 
            }
            if(sum == s) cnt++;
            int idx = k;
            while(idx >= 1 && a[idx] == n - k + idx){
                idx--;
            }
            if(idx == 0){
                break;
            }
            else{
                a[idx]++;
                for(int j = idx + 1;j <= k;++j){
                    a[j] = a[j-1] + 1;
                }
            }
        }
        cout << cnt <<"\n";
    }
}