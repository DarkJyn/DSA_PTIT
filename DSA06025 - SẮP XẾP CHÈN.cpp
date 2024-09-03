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
	for (int i = 0; i < n; i++){
		cin >> a[i];
    }
	for (int i = 0; i < n; i++){
		int k = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > k){
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = k;
		cout << "Buoc " << i << ": ";
		for (j = 0; j <= i; j++){
			cout << a[j] << " ";
        }
		cout << endl;
	}
}