#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct obj{
    int id;
    int v;
};

int n;
int x;
bool cmp(obj a,obj b){
    if(abs(x - a.v) == abs(x - b.v)) return a.id < b.id;
    return abs(x - a.v) < abs(x - b.v);
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        obj a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i].v;
            a[i].id = i;
        }
        sort(a,a + n,cmp);
        for(int i = 0;i < n;++i){
            cout << a[i].v <<" ";
        }
        cout <<"\n";
    }    
}