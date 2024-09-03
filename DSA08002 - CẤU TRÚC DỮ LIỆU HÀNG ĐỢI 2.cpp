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
    int n, x;
    cin >> n;
    string s;
    deque<int> dq;
    while (n--){
        cin >> s;
        if (s == "PUSH"){
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTFRONT"){
            if (dq.size()){
                cout << dq.front() << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }
        else if (s == "POP"){
            if (dq.size()){
                dq.pop_front();
            }
        }
    }
}