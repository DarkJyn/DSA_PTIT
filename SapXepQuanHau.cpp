#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
int result = -1;
int n;
bool checkrow[15];
bool checkcheochinh[30];
bool checkcheophu[30];
int matrix[10][10];
vector<pair<int,int>> curpoint;

void Solve(int col){
	for(int row = 1;row <= 8;++row){
		int cheochinh = row + col;
		int cheophu = col - row + 11;
		if(checkrow[row] == true) continue;
		if(checkcheochinh[cheochinh] == true) continue;
		if(checkcheophu[cheophu] == true) continue;
        curpoint.push_back({row,col});
		checkrow[row] = true;
		checkcheochinh[cheochinh] = true;
		checkcheophu[cheophu] = true;
		if(curpoint.size() == 8){
            int sum = 0;
            for(int i = 0;i < 8;++i){
                sum += matrix[curpoint[i].first][curpoint[i].second];
            }
            if(sum > result) result = sum;
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
	#ifndef ONLINE_JUDGE
	freopen("TASK.inp","r",stdin);
	freopen("TASK.out","w",stdout);
	#endif
	int t;cin >> t;
	while(t--){
        result = -1;
        curpoint.clear();
		memset(checkrow,0,sizeof(checkrow));
		memset(checkcheophu,0,sizeof(checkcheophu));
		memset(checkcheochinh,0,sizeof(checkcheochinh));
		for(int i = 1;i <= 8;++i){
            for(int j = 1;j <= 8;++j){
                cin >> matrix[i][j];
            }
        }
		Solve(1);
		cout << result <<"\n";
	}
}