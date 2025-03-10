#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i = 0;i < n;++i){
            int x,y;
            cin >> x >> y;
            v.push_back({x,y});
        }
        int cnt = 0;
        int pos = 0;
        sort(v.begin(),v.end(),cmp);
        for(auto x : v){
            int start = x.first;
            int end = x.second;
            if(start >= pos){
                cnt++;
                pos = end;
            }
        }
        cout << cnt <<"\n";
    }
}