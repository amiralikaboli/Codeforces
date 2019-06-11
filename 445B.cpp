#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
bool mark[MaxN];
vector <int> adj[MaxN];

void dfs(int v){
	mark[v]=true;
	for (int i=0;i<adj[v].size();++i)
		if (mark[adj[v][i]]==false)
			dfs(adj[v][i]);
}

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int cnt=0;
	for (int i=0;i<n;++i)
		if (mark[i]==false){
			dfs(i);
			++cnt;
		}
	cnt=n-cnt;
	cout << (1LL<<cnt);
}