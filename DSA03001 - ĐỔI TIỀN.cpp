#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int val[10] = {1,2,5,10,20,50,100,200,500,1000};

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int idx = 9;
        int cnt = 0;
        while(n > 0){
            while(n >= val[idx]){
                n -= val[idx];
                cnt++;
            }
            idx--;
        }
        cout<< cnt <<"\n";
    }   
}