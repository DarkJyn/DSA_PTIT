#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
void solve(int a[],int n){
    vector<int> cur(n + 2);
    for(int i = 0;i < n;++i){
        cur[i] = i + 1;
    }
    while(1){
        for(int i = 0;i < n;++i){
            cout << a[cur[i] - 1] << " ";
        }
        cout <<"\n";
        int idx = n - 2;
        while(idx >= 0 && cur[idx] > cur[idx + 1]){
            idx--;
        }
        if(idx < 0){
            break;
        }
        int ii = n - 1;
        while(ii > idx && cur[idx] > cur[ii]) ii--;
        swap(cur[ii],cur[idx]);
        int i = idx + 1;
        int j = n - 1;
        while(i < j){
            swap(cur[i],cur[j]);
            i++;
            j--;
        }
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;++i){
        cin >> a[i];
    }
    sort(a,a + n);
    solve(a,n);
}