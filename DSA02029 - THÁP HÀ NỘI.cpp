#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

int n;
void solve(int n,char beg,char mid,char end){
	if(n == 1){
		cout << beg << " -> " << end<<"\n";
	}
	else{
		solve(n - 1, beg,end,mid);
		cout << beg << " -> " << end<<"\n";
		solve(n - 1,mid,beg,end);
	}
}	

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	cin >> n;
	solve(n,'A','B','C');
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
