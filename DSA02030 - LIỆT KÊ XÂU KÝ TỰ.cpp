#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

char x;
int n;
int idx = 0;
vector<char> v;
vector<char> cur;
void Try(int pos){
	if(pos == n){
		for(auto x : cur) cout << x;
		cout <<"\n";
		return;
	}
	// cout <<"-\n";
	int i;
	if(cur.empty()) i = 0;
	else i = (int)(cur.back() - 'A');
	for(i;i <= idx;++i){
		cur.push_back(v[i]);
		Try(pos + 1);
		cur.pop_back();
	}

}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> x >> n;
	while(true){
		v.push_back((char) idx + 'A');
		if(idx + 'A' == x) break;
		idx++;
	}
	Try(0);
}