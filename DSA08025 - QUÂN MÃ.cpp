#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007;
#define pii pair<ll,ll>;
#define fi first;
#define se second;

int main(){
	cin.tie(nullptr) -> sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		string st,end;
		cin >> st >> end;
		queue<pair<string,int>> q;
		q.push({st,0});
		while(q.size()){
			pair<string,int> current = q.front();
			q.pop();
			string position = current.first;
			if(position == end){
				cout << current.second<<"\n";
				break;
			}
			if(position[0] >= 'b' && position[1] <= '6'){
				position[0] -= 1;
				position[1] += 2;
                q.push({position,current.second+1});
				position[0] += 1;
				position[1] -= 2;
			}
			if(position[0] <= 'g' && position[1] <= '6'){
				position[0] += 1;
				position[1] += 2;
				q.push({position,current.second+1});
				position[0] -= 1;
				position[1] -= 2;
			}
			if(position[0] <= 'f' && position[1] <= '7'){
				position[0] += 2;
				position[1] += 1;
				q.push({position,current.second+1});
				position[0] -= 2;
				position[1] -= 1;
			}
			if(position[0] <= 'f' && position[1] >= '2'){
				position[0] += 2;
				position[1] -= 1;
				q.push({position,current.second+1});
				position[0] -= 2;
				position[1] += 1;
			}
			if(position[0] >= 'c' && position[1] <= '7'){
				position[0] -= 2;
				position[1] += 1;
				q.push({position,current.second+1});
				position[0] += 2;
				position[1] -= 1;
			}
			if(position[0] >= 'c' && position[1] >= '2'){
				position[0] -= 2;
				position[1] -= 1;
				q.push({position,current.second+1});
				position[0] += 2;
				position[1] += 1;
			}
			if(position[0] >= 'b' && position[1] >= '3'){
				position[0] -= 1;
				position[1] -= 2;
				q.push({position,current.second+1});
				position[0] += 1;
				position[1] += 2;
			}
			if(position[0] <= 'g' && position[1] >= '3'){
				position[0] += 1;
				position[1] -= 2;
				q.push({position,current.second+1});
				position[0] -= 1;
				position[1] += 2;
			}
		}
	}
}
/* Dean
				  __------__
				/~          ~\
			   |    //^\//^\|         Oh..My great god ...     
			 /~~\  ||  o| |o|:~\       Please give me many many
			| |6   ||___|_|_||:|    /  bananas .. I want to AC!!
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