#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
int check(string k){
	for(int i = 1;i < k.size() - 1;++i){
		if((k[i] == 'A' || k[i] == 'E') && (k[i-1] != 'A' && k[i - 1] != 'E')&& (k[i+1] != 'A'&&k[i + 1] != 'E')) return 0;
	}
	return 1;
}
void solve(int n){
    vector<int> cur(n + 2);
    for(int i = 0;i < n;++i){
        cur[i] = i + 1;
    }
    while(1){
		string k;
        for(int i = 0;i < n;++i){
            k += (char)((cur[i] - 1) + 'A');
        }
		if(check(k)) {
			cout << k;
			cout <<"\n";
		}
        int idx = n - 2 ;
        while(idx >= 0 && cur[idx] > cur[idx + 1]){
            idx--;
        }
        if(idx < 0) break;
        int tmp = n - 1;
        while(tmp > idx && cur[idx] > cur[tmp]){
            tmp--;
        }
        swap(cur[tmp], cur[idx]);
        int i = idx+ 1;
        int j = n-1;
        while(i<j){
            swap(cur[i],cur[j]);
            i++;
            j--;
        } 
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	char x;
	cin >> x;
	n = (int) x - 'A';
	// cout << n;
	solve(n + 1);
	cout <<"\n";
}	