#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

ll countchar[100];

void fibo(){
    countchar[1] = 1;
    countchar[2] = 1;
    for(int i = 3;i < 93;++i){
        countchar[i] = countchar[i-1] + countchar[i-2];
    }
}

void solve(ll n, ll i){
    if(n == 1) {
        cout <<"A";
        return;
    }
    if(n == 2){
        cout <<"B";
        return;
    }

    if(i > countchar[n-2]){
        solve(n-1,i - countchar[n-2]);
    }
    else{
        solve(n-2,i);
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