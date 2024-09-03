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
        queue<string> dq;
        stack<string> ans;
        dq.push("6");
        dq.push("8");
        while (dq.size()){
            string k = dq.front();
            ans.push(k);
            dq.pop();
            if (k.size() != n){
                dq.push(k + "6");
                dq.push(k + "8");
            }
        }
        while (ans.size()){
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << endl;
    }
}
