#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int binarySearch(int arr[], int low, int high, int x){
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);
        return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}

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
        int x;
        cin >> x;
        int a[n+2];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        int idx = binarySearch(a,0,n-1,x);
        if(idx == -1) cout <<"NO\n";
        else cout << idx+1<<"\n";
    }
}