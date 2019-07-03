#include <bits/stdc++.h>

using namespace std;

const int MaxN=400+10;
int n,m;
bool b;
bool mark[MaxN];
bool adj[MaxN][MaxN];
int dist[MaxN];
queue <int> q;

void bfs(int v){
	mark[v]=true;
	dist[v]=0;
	q.push(v);
	while (!q.empty()){
		v=q.front();
		q.pop();
		for (int i=0;i<n;++i){
			int u=i;
			if (adj[u][v]==b && mark[u]==false){
				mark[u]=true;
				dist[u]=dist[v]+1;
				q.push(u);
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u][v]=true;
		adj[v][u]=true;
	}
	fill(dist,dist+MaxN,-1);
	b=!adj[0][n-1];
	bfs(0);
	cout << dist[n-1];
}