#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int,int>

const int MaxN=1E5+10;
const int INF=1E13;
int n,m;
int dist[MaxN],par[MaxN];
vector <int> adj[MaxN],w[MaxN],ans;
set <pii> st;

void Dijkstra(int s){
	fill(dist,dist+n,INF);
	fill(par,par+n,-1);
	dist[s]=0;
	for (int i=0;i<n;++i)
		st.insert(pii(dist[i],i));
	while (!st.empty()){
		set<pii>::iterator it=st.begin();
		int v=it->second;
		st.erase(it);
		for (int i=0;i<adj[v].size();++i){
			int u=adj[v][i];
			if (st.find(pii(dist[u],u))!=st.end()){
				st.erase(pii(dist[u],u));
				if (dist[u]>dist[v]+w[v][i]){
					dist[u]=dist[v]+w[v][i];
					par[u]=v;
				}
				st.insert(pii(dist[u],u));
			}
		}
	}
}

int32_t main (){
	ios::sync_with_stdio(false);
	cin.tie();
	cin >> n >> m;
	for (int i=0;i<m;++i){
		int u,v,t;
		cin >> u >> v >> t;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		w[u].push_back(t);
		w[v].push_back(t);
	}
	Dijkstra(0);
	int pt=n-1;
	while(pt!=-1){
		ans.push_back(pt);
		pt=par[pt];
	}
	if (!(ans[0]==n-1 && ans[ans.size()-1]==0)){
		cout << -1;
		return 0;
	}
	for (int i=ans.size()-1;i>=0;--i)
		cout << ++ans[i] << " ";
}