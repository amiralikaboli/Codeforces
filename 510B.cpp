#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
bool ans;
bool mark[MaxN*MaxN];
char c[MaxN][MaxN];
int par[MaxN*MaxN];
vector <int> adj[MaxN*MaxN];

void dfs(int v){
	mark[v]=true;
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if (mark[u]==true && par[v]!=u)
			ans=true;
		else if (mark[u]==false){
			par[u]=v;
			dfs(u);
		}
	}
}

int main(){
	fill (par,par+MaxN*MaxN,-1);
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;++i)
		for (int j=1;j<=m;++j)
			cin >> c[i][j];
	for (int i=1;i<=n;++i)
		for (int j=1;j<=m;++j){
			if (c[i][j]==c[i-1][j])
				adj[i*m+j].push_back((i-1)*m+j);
			if (c[i][j]==c[i+1][j])
				adj[i*m+j].push_back((i+1)*m+j);
			if (c[i][j]==c[i][j-1])
				adj[i*m+j].push_back(i*m+j-1);
			if (c[i][j]==c[i][j+1])
				adj[i*m+j].push_back(i*m+j+1);
		}
	for (int i=1;i<=n;++i)
		for (int j=1;j<=m;++j)
			if (mark[i*m+j]==false)
				dfs(i*m+j);
	cout << (ans==true ? "Yes" : "No");
}