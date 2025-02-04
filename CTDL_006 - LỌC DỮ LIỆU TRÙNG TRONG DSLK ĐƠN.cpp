#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int b[1000000];
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;++i){
        cin >> a[i];
        b[a[i]]++;
    }
    for(int i = 0;i < n;++i){
        if(b[a[i]] > 0){
			cout << a[i] <<" ";
			b[a[i]] = 0;
        }
    }
}