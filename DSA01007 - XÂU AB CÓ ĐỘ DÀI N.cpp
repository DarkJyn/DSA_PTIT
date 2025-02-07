#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<string> solve(int n){
	vector<string> v;
	queue<string> q;
	q.push("A");
	q.push("B");
	while(!q.empty()){
		string tmp = q.front();
		q.pop();
		if(tmp.size() == n){
			v.push_back(tmp);
			continue;
		}
		q.push(tmp + "A");
		q.push(tmp + "B");
	}
	return v;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> res = solve(n);
        for(auto x : res){
            cout << x <<" ";
        }
        cout <<"\n";
    }
}