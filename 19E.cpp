#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=1E5+10;
bool mark[MaxN];
int odd,ext;
int dist[MaxN];
int id[MaxN];
int o[MaxN],e[MaxN];
map <pii,int> mp;
vector <int> ans;
vector <int> adj[MaxN];

void dfs(int v){
	mark[v]=true;
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if (mark[u]==false){
			dist[u]=dist[v]+1;
			dfs(u);
			o[v]+=o[u];
			e[v]+=e[u];
			id[u]=mp[pii(u,v)];
		}
	}
	for (int i=0;i<adj[v].size();++i){
		int u=adj[v][i];
		if (dist[v]+1<dist[u]){
			if ((dist[u]-dist[v])%2==0){
				++odd;
				--o[v];
				ext=mp[pii(u,v)];
			}
			else
				--e[v];
		}
		else if (dist[v]>dist[u]+1){
			if ((dist[v]-dist[u])%2==0)
				++o[v];
			else
				++e[v];
		}
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie();
//input
	int n,m;
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		mp[pii(u,v)]=i;
		mp[pii(v,u)]=i;
	}
//dfs
	for (int i=0;i<n;++i)
		if (mark[i]==false)
			dfs(i);
//output
	if (odd==0){
		cout << m << endl;
		for (int i=0;i<m;++i)
			cout << i+1 << " ";
	}
	else{
		for (int i=0;i<n;++i)
			if (o[i]==odd && e[i]==0)
				ans.push_back(id[i]+1);
		if (odd==1)
			ans.push_back(ext+1);
		sort(ans.begin(),ans.end());
		cout << ans.size() << endl;
		for (int i=0;i<ans.size();++i)
			cout << ans[i] << " ";
	}
}