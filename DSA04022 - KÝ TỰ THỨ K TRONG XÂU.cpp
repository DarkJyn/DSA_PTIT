#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

ll countchar[30];

void fibo(){
    countchar[1] = 1;
    countchar[2] = 3;
    for(int i = 3;i < 26;++i){
        countchar[i] = 2 * countchar[i-1] + 1;
    }
}

void solve(ll n, ll i){
    if(n == 1) {
        cout <<"A";
        return;
    }
    if(i == countchar[n - 1] + 1){
        cout << char('A' + n - 1);
    }
    else if(i <= countchar[n-1]){
        solve(n-1,i);
    }
    else{
        solve(n - 1,i - countchar[n - 1] -1 );
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    fibo();
    int t;
    cin >> t;
    while(t--){
        ll n,i;
        cin >> n >> i;
        solve(n,i);
        cout <<"\n";
    }
}