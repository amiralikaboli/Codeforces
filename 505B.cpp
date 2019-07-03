#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define X real()
#define Y imag()
#define cout cout << setprecision(18)

const int MaxN=100+10;
const int MaxM=100+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
bool mark[MaxN];
vector <int> adj[MaxN][MaxM];

void dfs(int v,int c){
	mark[v]=true;
	for (int i=0;i<adj[v][c].size();++i){
		int u=adj[v][c][i];
		if (mark[u]==false)
			dfs(u,c);
	}
}

int32_t main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v,c;
		cin >> u >> v >> c;
		--u;
		--v;
		adj[u][c].push_back(v);
		adj[v][c].push_back(u);
	}
	int q;
	cin >> q;
	for (int i=0;i<q;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		int ans=0;
		for (int i=1;i<=m;++i){
			fill(mark,mark+n,false);
			dfs(u,i);
			ans+=mark[v];
		}
		cout << ans << endl;
	}
}