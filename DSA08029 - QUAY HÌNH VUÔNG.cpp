#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

struct square{
	int a,b,c,d,e,f;
};

void solve(){
	square start;
	square end;
	cin >> start.a >> start.b >> start.c >> start.d >> start.e >> start.f;
	cin >> end.a >> end.b >> end.c >> end.d >> end.e >> end.f;
	queue<pair<square,int>> q;
	q.push({start,0});
	int res = 1e9;
	while(!q.empty()){
		pair<square,int> current = q.front();
		square tmp = current.first;
		q.pop();
		if(tmp.a == end.a && tmp.b == end.b && tmp.c == end.c &&tmp.d == end.d &&tmp.e == end.e &&tmp.f == end.f){
			cout << current.second;
			return;
		}
		tmp.a = current.first.d;
		tmp.b = current.first.a;
		tmp.d = current.first.e;
		tmp.e = current.first.b;
		q.push({tmp,current.second + 1});
		tmp.a =current.first.a;
		tmp.d = current.first.d;
		tmp.b = current.first.e;
		tmp.c = current.first.b;
		tmp.e = current.first.f;
		tmp.f = current.first.c;
		q.push({tmp,current.second + 1});
	}
	cout << res;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    ll t;
    cin >> t;
    while(t--){
        solve();
        cout <<"\n";
		// cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    }
}