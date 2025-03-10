#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int n,m;
char a[101][101];
int cnt = 0;
void solve(int i ,int j){
    a[i][j] = '.';
    if(a[i + 1][j] == 'W') solve(i + 1,j);
    if(a[i + 1][j + 1] == 'W') solve(i + 1,j + 1);
    if(a[i + 1][j - 1] == 'W') solve(i + 1,j - 1);
    if(a[i][j + 1] == 'W') solve(i,j + 1);
    if(a[i][j - 1] == 'W') solve(i,j - 1);
    if(a[i - 1][j] == 'W') solve(i - 1,j);
    if(a[i - 1][j + 1] == 'W') solve(i - 1,j + 1);
    if(a[i - 1][j - 1] == 'W') solve(i - 1,j - 1);
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0;i < n;++i) {
        for(int j = 0;j < m;++j){
            cin >> a[i][j];
        }
    }   
    for(int i = 0;i < n;++i) {
        for(int j = 0;j < m;++j){
            if(a[i][j] == 'W') {
                cnt++;
                solve(i,j);
            }
        }
    }
    cout << cnt;
}