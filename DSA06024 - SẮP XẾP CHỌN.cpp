#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector
#define endl "\n"

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n - 1; i++) {
		int k = i;
		for (int j = i + 1; j < n; j++){
			if (a[j] < a[k]) k = j;
        }
		swap(a[k], a[i]);
		cout << "Buoc " << i + 1 << ": ";
		for (int j = 0; j < n; j++){
			cout << a[j] << " ";
        }
		cout << endl;
	}
}