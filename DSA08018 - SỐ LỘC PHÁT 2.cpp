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
        int s = 0;
        queue<string> dq;
        dq.push("6");
        dq.push("8");
        for (int i = 1; i <= n; i++){
            s += pow(2, i);
        }
        cout << s << endl;
        while (dq.size()){
            string k = dq.front();
            cout << k << " ";
            dq.pop();
            if (k.size() != n){
                dq.push(k + "6");
                dq.push(k + "8");
            }
        }
        cout << endl;
    }
}