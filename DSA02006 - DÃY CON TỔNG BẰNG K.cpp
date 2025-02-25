#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int n,x;
int a[25];
vector<vector<int>> store;
vector<int> current;
int currentsum = 0;
void solve(int pos){
	for(int i = pos;i < n ;++i){
		currentsum += a[i];
		current.push_back(a[i]);
		if(currentsum == x){
			store.push_back(current);
		}
		else if(currentsum < x){
			solve(i + 1);
		}
		currentsum -= a[i];
		current.pop_back();
	}
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		currentsum = 0;
		current.clear();
		store.clear();
		cin >> n >> x;
		for(int i = 0;i < n;++i){
			cin >> a[i];
		}
		sort(a,a+n);
		solve(0);
		if(store.size() == 0) cout <<"-1";
		else{
			for(int i = 0;i < store.size();++i){
				cout <<"[";
				for(int j = 0;j < store[i].size();++j){
					cout << store[i][j];
					if(j != store[i].size()-1) cout <<" ";
				}
				cout <<"] ";
			}
		}
		cout <<"\n";
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
