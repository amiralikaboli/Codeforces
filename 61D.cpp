#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
bool mark[MaxN];
int dist[MaxN];
vector <int> adj[MaxN],weight[MaxN];

void dfs(int v){
	mark[v]=true;
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		int w=weight[v][i];
		if (mark[u]==false){
			dist[u]=dist[v]+w;
			dfs(u);
		}
	}
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	int n;
	cin >> n;
	int sum=0;
	for (int i=0;i<n-1;++i){
		int u,v,w;
		cin >> u >> v >> w;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		weight[u].push_back(w);
		weight[v].push_back(w);
		sum+=w;
	}
	dfs(0);
	int mx=*max_element(dist,dist+n);
	cout << 2*sum-mx;
}