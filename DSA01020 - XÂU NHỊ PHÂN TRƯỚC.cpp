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
		int n = s.size() - 1;
		while(n >= 0 && s[n] == '0'){
			s[n] = '1';
			n--;
		}
		if(n < 0){
			cout << s<< "\n";
		}
		else{
			s[n] = '0';
			cout << s <<"\n";
		}
	}
}