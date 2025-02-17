#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int prime[1000006];
void era(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2;i * i <= 1000000;++i){
        if(prime[i] == 0){
            for(int j = i * i;j <= 1000000;j+=i){
                prime[j] = 1;
            }
        }
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    era();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check = 0;
        for(int i = 2;i <= n / 2;++i){
            if(prime[i] == 0 && prime[n - i] == 0){
                check = 1;
                cout << i <<" "<< n - i<<"\n";
                break;
            }
        }
        if(check == 0) cout << -1<<"\n";
    }   
}