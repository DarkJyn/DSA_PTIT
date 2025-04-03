#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >> s;
		s = ' ' + s;
		int n = s.size(), k;
		int a[n];
		a[0] = a[1] = 1;
		if (s[1] == '0'){
			cout << 0 << endl;
			continue;
		}
		for (int i = 2; i < n; i++){
			if (s[i] == '0'){
				if (s[i - 1] > '2'){
					a[n - 1] = 0;
					break;
				}
				a[i] = 0;
			}
			else{
				a[i] = a[i - 1];
			}
			k = (s[i - 1] - '0') * 10 + s[i] - '0';
			if (k <= 26 && k >= 10) a[i] += a[i - 2];
		}
		cout << a[n - 1] << endl;
	}	
}
/* Dean
				  __------__
				/~          ~\
			   |    //^\//^\|         Oh..My great god ...     
			 /~~\  ||  o| |o|:~\       Please give me many many
			| |6   ||___|_|_||:|    /  bananas .. 
			 \__.  /      o  \/'       
			  |   (       O   )        
	 /~~~~\    `\  \         /
	| |~~\ |     )  ~------~`\
   /' |  | |   /     ____ /~~~)\
  (_/'   | | |     /'    |    ( |
		 | | |     \    /   __)/ \
		 \  \ \      \/    /' \   `\
		   \  \|\        /   | |\___|
			 \ |  \____/     | |
			 /^~>  \        _/ <
			|  |         \       \
			|  | \        \        \
			-^-\  \       |        )
				 `\_______/^\______/-Dean
*/
