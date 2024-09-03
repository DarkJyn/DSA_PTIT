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
    int n;
    cin >> n;
    deque<int> dq;
    while (n--){
        string s;
        int x;
        cin >> s;
        if (s == "PUSHFRONT"){
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "PRINTFRONT"){
            if (dq.size()){
                cout << dq.front() << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }
        else if (s == "POPFRONT"){
            if (dq.size()){
                dq.pop_front();
            }
        }
        else if (s == "PUSHBACK"){
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTBACK"){
            if (dq.size()){
                cout << dq.back() << endl;
            }
            else{
                cout << "NONE" << endl;
            }
        }
        else if (s == "POPBACK"){
            if (dq.size()){
                dq.pop_back();
            }
        }
    }   
}