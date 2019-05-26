#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E4+10;
const int MaxK=5E2+10;
int n,k;
long long ans;
int mark[MaxN],d[MaxN][MaxK];
vector <int> adj[MaxN];

void dfs(int root){
	mark[root]=true;
	d[root][0]=1;
	for(int i=0;i<adj[root].size();++i){
		if(mark[adj[root][i]]==false){
			dfs(adj[root][i]);
			for(int j=0;j<k;++j)
				ans+=d[adj[root][i]][j]*d[root][k-1-j];
			for(int j=0;j<k;++j)
				d[root][j+1]+=d[adj[root][i]][j];
		}
	}
}

int main(){  
	cin >> n >> k;
	for(int i=0;i<n-1;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v); 
		adj[v].push_back(u);
	}
	dfs(0);
	cout << ans << endl;
	return 0;
}
