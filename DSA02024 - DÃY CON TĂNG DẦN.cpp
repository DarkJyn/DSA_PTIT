#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int n;
int a[25];
vector<int> v;
vector<vector<int>> vv;
vector<string> ans;
void Try(int pos){
    for(int i = pos + 1;i <= n;++i){
        if(a[i] > a[pos]){
            v.push_back(a[i]);
            if(v.size() > 1){
                vv.push_back(v);
            }
            Try(i);
            v.pop_back();
        }
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // int n;
    cin >> n;
    // int a[n];
    a[0] = 0;
    for(int i = 1;i <= n;++i){
        cin >> a[i];
    }   
    Try(0);
    for(int i = 0;i < vv.size();++i){
        string k ="";
        for(int j = 0; j < vv[i].size();++j){
            k += to_string(vv[i][j]);
            k += " ";
        }
        ans.push_back(k);
        // cout <<"\n";
    }
    sort(ans.begin(),ans.end());
    for(auto x : ans){
        cout << x <<"\n";
    }
}