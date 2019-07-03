#include <bits/stdc++.h>

using namespace std;

const int MaxN=500+10;
int n,m;
int marked_node=0;
bool mark[MaxN];
int deg[MaxN];
char ans[MaxN];
bool adj[MaxN][MaxN];

void dfs(int v,char c){
	mark[v]=true;
	++marked_node;
	ans[v]=c;
	for (int i=0;i<n;++i)
		if (mark[i]==false && adj[v][i]==true)
			dfs(i,c);
}

int main(){
	ios::sync_with_stdio(false); cin.tie();
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		++deg[u];
		++deg[v];
		adj[u][v]=adj[v][u]=true;
	}
	for (int i=0;i<n;++i)
		if (deg[i]==n-1){
			mark[i]=true;
			ans[i]='b';
			++marked_node;
		}
	for (int i=0;i<n;++i)
		if (mark[i]==false){
			dfs(i,'a');
			break;
		}
	for (int i=0;i<n;++i)
		if (mark[i]==false){
			dfs(i,'c');
			break;
		}
	if (marked_node!=n){
		cout << "NO";
		return 0;
	}
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (ans[i]==ans[j] && adj[i][j]==false){
				cout << "NO";
				return 0;
			}
	cout << "YES\n";
	for (int i=0;i<n;++i)
		cout << ans[i];
}