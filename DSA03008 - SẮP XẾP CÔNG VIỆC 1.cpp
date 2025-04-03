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
        int beg[n];
        int end[n];
        for(int i = 0;i < n;++i){
            cin >> beg[i];
        }
        for(int i = 0;i < n;++i){
            cin >> end[i];
        }
        vector<pair<int,int>> v;
        for(int i = 0;i < n;++i){
            v.push_back({beg[i],end[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int cnt = 0;
        int pos = 0;
        for(int i = 0;i < n;++i){
            if(v[i].first >= pos){
                cnt++;
                pos = v[i].second;
            }
        }
        cout << cnt <<"\n";
    }    
}