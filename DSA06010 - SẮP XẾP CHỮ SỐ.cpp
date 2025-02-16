#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        set<char> a;
        for(int i = 0;i < s.size();++i){
            if(s[i] == ' ') continue;
            a.insert(s[i]);
        }
        for(auto x : a){
            cout << x <<" ";
        }
        cout <<"\n";
    }
}