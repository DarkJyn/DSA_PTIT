#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        stack<int> st;
        vector<int> a(n), b(n, -1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            while (!st.empty() && a[i] > a[st.top()]){
                b[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++){
            if (b[i] == -1){
                cout << -1 << " ";
            }
            else{
                cout << a[b[i]] << " ";
            }
        }
        cout << endl;
    }
}