#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<string> st;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(st.size()){
            cout << st.top() <<" ";
            st.pop();
        }
        cout <<"\n";
    }
}