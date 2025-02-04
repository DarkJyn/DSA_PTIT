#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int n,k;

int checksum(string s,int a[]){
	int sum = 0;
	for(int i = 0;i < n; ++i){
		sum += (a[i] * (s[i] == '1')); 
	}
	if(sum == k) return 1;
	return 0;
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
	
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	int cnt = 0;
	vector<string> res = solve(n);
	for(string x : res){
		if(checksum(x,a)){
			cnt++;
			for(int i = 0;i < x.size();++i){
				if(x[i] == '1'){
					cout << a[i] <<" ";
				}
			}
			cout <<"\n";
		}
	}
	cout << cnt;
}