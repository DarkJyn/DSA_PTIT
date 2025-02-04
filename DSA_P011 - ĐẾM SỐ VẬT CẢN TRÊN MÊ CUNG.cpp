#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int n,m;
char grid[100][100];
void solve(int i, int j){
	grid[i][j] = '.';
	// cout << i << " " <<j <<"\n";
	if(i > 0 && grid[i - 1][j] == '#') solve(i-1,j);
	if(i < n - 1 && grid[i + 1][j] == '#') solve(i + 1,j);
	if(j > 0 && grid[i][j - 1] == '#') solve(i,j - 1);
	if(j < m - 1 && grid[i][j + 1]== '#') solve(i,j + 1);
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < m;++j){
			cin >> grid[i][j];
		}
	}	
	int cnt = 0;
	for(int i = 0; i < n;++i){
		for(int j = 0;j < m;++j){
			if(grid[i][j] == '#'){
				// cout << i << " " <<j <<"*\n";
				solve(i,j);
				cnt++;
			}
		}
	}
	cout << cnt;
	// cout << grid[2][5];

}