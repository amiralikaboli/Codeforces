#include <iostream>
#include <vector>

using namespace std;

const int MaxN=1E5+10;
int t[MaxN],dp[MaxN];
bool cat[MaxN];
bool mark[MaxN];
vector <int> adj[MaxN];
vector <int> leaf;

int dfs(int root){
	mark[root]=true;
	for (int i=0;i<adj[root].size();++i)
		if (mark[adj[root][i]]==false){
			if (cat[adj[root][i]]==true)
				t[adj[root][i]]=t[root]+1;
			dp[adj[root][i]]=max(dp[root],t[adj[root][i]]);
			dfs(adj[root][i]);
		}
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> cat[i];
	for (int i=0;i<n-1;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i=1;i<n;++i)
		if (adj[i].size()==1){
			leaf.push_back(i);
			cerr << i+1 << " ";
		}
	cerr << endl;
	t[0]=dp[0]=cat[0];
	dfs(0);
	for (int i=0;i<n;++i)
		cerr << t[i] << " " << dp[i] << endl;
	cerr << endl;
	int ans=leaf.size();
	for (int i=0;i<leaf.size();++i)
		if (dp[leaf[i]]>k)
			--ans;
	cout << ans;
}