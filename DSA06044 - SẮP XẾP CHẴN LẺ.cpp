#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define endl "\n"

bool cmp(int a, int b){
	return a > b;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	int a[n];
	vector<int> odd, even;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i % 2 == 0) even.push_back(a[i]);
		else odd.push_back(a[i]);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end(), cmp);
    int idx = 0;
    int idy = 0;
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			cout << even[idx++] << " ";
        }
		else{
			cout << odd[idy++] << " ";
        }
    }
}