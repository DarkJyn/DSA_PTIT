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
        int a[n + 2];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        // 1 2 3 4 5
        int idx = n-2;
        // 5
        while(idx >= 0 && a[idx] > a[idx+1]){
            idx--;
        }
        if(idx < 0){
            for(int i = 0;i < n;++i){
                cout << i + 1<<" ";
            }
            cout <<"\n";
        }
        else{
            int tmp = n-1;
            while(tmp > idx && a[idx] > a[tmp]){
                tmp--;
            }
            swap(a[tmp],a[idx]);
            int i = idx+ 1;
            int j = n-1;
            while(i<j){
                swap(a[i],a[j]);
                i++;
                j--;
            }
            for(int i = 0;i < n;++i){
                cout << a[i] <<" ";
            }
            cout << "\n";
        }
    }    
}