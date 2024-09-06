#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

int n;
string s;
vector<string> ans;
map<string, int> m;

void Try(int i, string x){
    if (x != "" && m[x] == 0){
        ans.push_back(x);
        m[x]++;
    }
    if (i == n) return;
    Try(i + 1, x + s[i]);
    Try(i + 1, x);
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int t;
    cin >> t;
    while (t--){
        ans.clear();
        m.clear();
        cin >> n >> s;
        Try(0, "");
        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
		}
        cout << endl;
    }
}