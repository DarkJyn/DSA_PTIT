#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int checknp(string s){
	int l = 0;
	int r = s.size() - 1;
	while(l < r){
		if(s[l] != s[r]) return 0;
		l++;
		r--; 
	}
	return 1;
}

vector<string> solve(int n){
	vector<string> v;
	queue<string> q;
	q.push("0");
	q.push("1");
	while(!q.empty()){
		string tmp = q.front();
		q.pop();
		if(tmp.size() == n){
			v.push_back(tmp);
			continue;
		}
		q.push(tmp + "0");
		q.push(tmp + "1");
	}
	return v;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	int cnt = 0;
	vector<string> res = solve(n);
	for(string x : res){
		if(checknp(x)){
			cnt++;
			for(int i = 0;i < x.size();++i){
				cout << x[i] <<" ";
			}
			cout <<"\n";
		}
	}
	// cout << cnt;
}