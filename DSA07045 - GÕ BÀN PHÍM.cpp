#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    stack<char> left;
    stack<char> right;
    int n = s.size();
    for(int i = 0;i < n;++i){
        if(s[i] == '<'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(s[i] == '>'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(s[i] == '-'){
            if(left.size()) left.pop();
        }
        else{
            left.push(s[i]);
        }
    }
    string res ="";
    while(!right.empty()){
        left.push(right.top());
        right.pop();
    }
    reverse(res.begin(),res.end());
    while(!left.empty()){
        res.push_back(left.top());
        left.pop();
    }
    reverse(res.begin(),res.end());
    cout << res;
}