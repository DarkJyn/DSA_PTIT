#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void solve(int n){
    vector<int> cur(n + 2);
    for(int i = 0;i < n;++i){
        cur[i] = i + 1;
    }
    while(1){
        for(int i = 0;i < n;++i){
            cout << cur[i];
        }
        cout <<" ";
        int idx = n - 2 ;
        while(idx >= 0 && cur[idx] > cur[idx + 1]){
            idx--;
        }
        if(idx < 0) break;
        int tmp = n - 1;
        while(tmp > idx && cur[idx] > cur[tmp]){
            tmp--;
        }
        swap(cur[tmp], cur[idx]);
        int i = idx+ 1;
        int j = n-1;
        while(i<j){
            swap(cur[i],cur[j]);
            i++;
            j--;
        } 
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
        cout <<"\n";
    }
}