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
        int n, k;
        cin >> n >> k;
        int a[n];
        deque<int> d;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            while (d.size() && a[d.back()] <= a[i])
                d.pop_back();
            d.push_back(i);
            while (d.size() && d.front() <= i - k)
                d.pop_front();
            if (i >= k - 1)
                cout << a[d.front()] << " ";
        }
        cout <<"\n";
    }
}