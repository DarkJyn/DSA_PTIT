#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int n;
int check[15];
void Try(string s){
    if(s.size() == n){
        cout << s <<"\n";
    }
    else{
        for(int i = 1;i <= n;++i){
            if(check[i] == 0 && abs(s[s.size() - 1] - '0' - i) != 1){
                check[i] = 1;
                Try(s + to_string(i));
                check[i] = 0;
            }
        }
    }
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try("");        
    }
}