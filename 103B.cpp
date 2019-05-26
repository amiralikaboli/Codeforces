#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;

bool mark[MaxN];
vector <int> adj[MaxN];

void dfs(int v){
	mark[v]=true;
	for(int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if(mark[u]==false)
			dfs(u);
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(0);
	for(int i=0;i<n;++i)
		if (mark[i]==false){
			cout << "NO";
			return 0;
		}
	cout << (m==n ? "FHTAGN!" : "NO");
}