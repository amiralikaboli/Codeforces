#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E4+10;
bool mark[MaxN];
int par[MaxN];
vector <int> adj[MaxN];

void dfs(int v){
	mark[v]=true;
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if (mark[u]==false){
			par[u]=v+1;
			dfs(u);
		}
	}
}

int main(){
	int n,r1,r2;
	cin >> n >> r1 >> r2;
	--r1;
	--r2;
	for (int i=0;i<n;++i){
		if (i==r1)
			continue;
		int v;
		cin >> v;
		--v;
		adj[i].push_back(v);
		adj[v].push_back(i);
	}	
	dfs(r2);
	for (int i=0;i<n;++i){
		if (i==r2)
			continue;
		cout << par[i] << " ";
	}
}