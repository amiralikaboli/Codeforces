#include <bits/stdc++.h>

using namespace std;

const int MaxN=4E3+10;
const int INF=1E9+7;
bool edge[MaxN][MaxN];
vector <int> adj[MaxN];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		edge[u][v]=true;
		edge[v][u]=true;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int ans=INF;
	for (int i=0;i<n;++i)
		for (auto j : adj[i])
			for (auto l : adj[i]){
				if (j==l)
					continue;
				if (edge[i][j] && edge[j][l] && edge[l][i])
					ans=min(ans,(int)adj[i].size()+(int)adj[j].size()+(int)adj[l].size()-6);
			}
	cout << (ans==INF ? -1 : ans);
}