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
        string s;
        cin >> s;
        vector<int> res;
        int pos = 0;
        int n = s.size();
        for(int i = 0;i < n;++i){
            if(s[i] == 'D'){
                if(i == 0 || s[i - 1] == 'I'){
                    res.push_back(++pos);
                }
                res.push_back(++pos);
            }
            else{
                while(res.size()){
                    cout << res[res.size() - 1];
                    res.erase(res.end()-1);
                }
                if(i == 0){
                    cout << ++pos;
                }
                if(s[i + 1] != 'D'){
                    cout << ++pos;
                }
            }
        }
        while(res.size()){
            cout << res[res.size() - 1];
            res.erase(res.end()-1);
        }
        cout << endl;
    }
}