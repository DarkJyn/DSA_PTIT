#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;
#define fi first
#define se second

int l1[10] = {0,4,1,3,8,5,2,7,9,6};
int r1[10] = {3,0,2,7,4,1,6,8,5,9};
int l2[10] = {1,5,2,0,4,8,6,3,7,9};
int r2[10] = {0,2,6,3,1,5,9,7,4,8};

string left1(string a){
	string b="";
	for(int i=0;i<10;i++) b+=a[l1[i]];
	return b;
}
string right1(string a){
	string b="";
	for(int i=0;i<10;i++) b+=a[r1[i]];
	return b;
}
string left2(string a){
	string b="";
	for(int i=0;i<10;i++) b+=a[l2[i]];
	return b;
}
string right2(string a){
	string b="";
	for(int i=0;i<10;i++) b+=a[r2[i]];
	return b;
}

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
    int t;
    cin >> t;
    while(t--){

        string end;
        for(int i=0;i<10;i++){
            int x;
            cin>>x;
            end+=to_string(x);
        }
        string st = "1238004765";
        pair <string,int> x1,y1,k;
        map <string,int> visited;
        
        x1.fi = end;
        x1.se = 0;
        queue <pair <string,int> > q1,q2;
        
        q1.push(x1);
        
        while(q1.size()){
            y1 = q1.front();
            q1.pop();
            
            k.se = y1.se+1;
            
            k.fi = left1(y1.fi);
            if(visited[k.fi]==0) visited[k.fi] = k.se;
            q1.push(k);
            
            k.fi = right1(y1.fi);
            if(visited[k.fi]==0) visited[k.fi] = k.se;
            q1.push(k);
            
            if(k.se == 14) break;
        }
        
        pair <string,int> x2,y2;
        x2.fi = st;
        x2.se = 0;
        q2.push(x2);
        int min1 = 1e9;
        while(q2.size()){
            y2 = q2.front();
            q2.pop();
            if(visited[y2.fi] > 0) min1 = min(min1,visited[y2.fi]+y2.se);
            
            k.se = y2.se+1;
            k.fi = left2(y2.fi);
            q2.push(k);
            
            k.fi=right2(y2.fi);
            q2.push(k);
            
            if(k.se == 14) break;
        }
        cout << min1 <<"\n";
    }
}