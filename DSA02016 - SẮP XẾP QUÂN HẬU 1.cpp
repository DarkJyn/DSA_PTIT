#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
int result;
int n;

bool checkrow[15];
bool checkcheochinh[30];
bool checkcheophu[30];

vector<pair<int,int>> curpoint;

void Solve(int col){
	for(int row = 1;row <= n;++row){
		int cheochinh = row + col;
		int cheophu = col - row + 10;
		if(checkrow[row] == true) continue;
		if(checkcheochinh[cheochinh] == true) continue;
		if(checkcheophu[cheophu] == true) continue;
        curpoint.push_back({row,col});
		checkrow[row] = true;
		checkcheochinh[cheochinh] = true;
		checkcheophu[cheophu] = true;
		if(curpoint.size() == n){
            result++;
        }
		else Solve(col + 1);
        curpoint.pop_back();
		checkrow[row] = false;
		checkcheochinh[cheochinh] = false;
		checkcheophu[cheophu] = false;
	}
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;cin >> t;
	while(t--){
        cin >> n;
        result = 0;
        curpoint.clear();
		memset(checkrow,0,sizeof(checkrow));
		memset(checkcheophu,0,sizeof(checkcheophu));
		memset(checkcheochinh,0,sizeof(checkcheochinh));
		Solve(1);
		cout << result <<"\n";
	}
}