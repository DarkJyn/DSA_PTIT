#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<string> ans;
char a[11][11];
int n;
void Try(int i,int j,string s){
    if(a[i][j] == '0') return;
    if(i == n - 1 && j == n - 1){
        ans.push_back(s);
        return;
    }
    if(i < n - 1 && a[i + 1][j] == '1'){
        Try(i+1,j,s + "D");
    }
    if(j < n - 1 && a[i][j + 1] == '1'){
        Try(i,j + 1,s + "R");
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        ans.clear();
        // int n;
        cin >> n;
        for(int i = 0;i < n;++i){
            for(int j = 0;j < n;++j){
                cin >> a[i][j];
            }
        }

        Try(0,0,"");
        if(ans.size() == 0){
            cout <<"-1\n";
        }
        else{
            for(auto x : ans){
                cout << x <<" ";
            }
        }
        cout <<"\n";
    }
}