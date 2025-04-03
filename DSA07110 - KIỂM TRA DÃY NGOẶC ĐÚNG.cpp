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
        stack<char> q;
        int n = s.size();
        int check = 1;
        for(int i = 0;i < n;++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                q.push(s[i]);
            }
            else if(s[i] == ')' &&!q.empty() &&q.top() == '('){
                q.pop();
            }
            else if(s[i] == ']'&&!q.empty() && q.top() == '['){
                q.pop();
            }
            else if(s[i] == '}'&&!q.empty() && q.top() == '{'){
                q.pop();
            }
            else{
                check = 0;
                break;
            }
        }
        if(q.size() > 0) check = 0;
        if(check) cout << "YES\n";
        else cout <<"NO\n";
    }
}