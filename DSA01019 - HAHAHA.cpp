#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

vector<string> solve(int n){
	vector<string> v;
	queue<string> q;
	q.push("H");
	while(!q.empty()){
		string tmp = q.front();
		q.pop();
		if(tmp.size() == n){
			v.push_back(tmp);
			continue;
		}
		if(tmp.size() == n - 1){
			q.push(tmp + "A");
		}
		else{
			if(tmp[tmp.size() - 1] == 'A'){
				q.push(tmp + "A");
				q.push(tmp + "H");
			}
			else{
				q.push(tmp + "A");

			}
		}
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
			cout << x <<"\n";
        }
    }
}