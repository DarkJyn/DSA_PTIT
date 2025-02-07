#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<pair<string,int>> solve(int n){
	vector<pair<string,int>> v;
	queue<pair<string,int>> q;
	q.push({"0",0});
	q.push({"1",1});
	while(!q.empty()){
		pair<string,int> tmp = q.front();
		q.pop();
		if(tmp.first.size() == n){
			v.push_back(tmp);
			continue;
		}
		q.push({tmp.first + "0",tmp.second});
		q.push({tmp.first + "1",tmp.second + 1});
	}
	return v;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<pair<string,int>> res = solve(n);
        for(auto x : res){
			if(x.second == k) cout << x.first <<"\n";
        }
    }
}