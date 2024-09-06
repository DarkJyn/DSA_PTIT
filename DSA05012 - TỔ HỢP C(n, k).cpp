#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define fi first
#define se second

ll a[1005][1005];

void prepair(){
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	for(int i = 2;i <= 1000;++i){
		for(int j = 0;j <= i;++j){
			if(j == 0 || j == i) a[i][j] = 1;
			else{
				a[i][j] = (a[i-1][j-1] % MOD + a[i-1][j] % MOD)%MOD;
			}
		}
	}
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	prepair();
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << a[n][k]<<"\n"; 
	}
}