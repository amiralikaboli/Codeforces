#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;;
int dp[MaxN];
vector <int> adj[MaxN];

int32_t main(){
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
	int ans=0;
	for (int i=0;i<n;++i){
		for (int j=0;j<adj[i].size();++j)
			if (adj[i][j]<i)
				dp[i]=max(dp[i],dp[adj[i][j]]);
		++dp[i];
		ans=max(ans,dp[i]*adj[i].size());
	}
	cout << ans;
}	