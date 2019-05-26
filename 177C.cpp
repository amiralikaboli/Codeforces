#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E3+10;
bool mark[MaxN];
int par[MaxN],t[MaxN];

int get_par(int v){
	if (par[v]==-1)
		return v;
	return par[v]=get_par(par[v]);
}

void dsu(int u,int v){
	int pu=get_par(u);
	int pv=get_par(v);
	if(pu==pv)
		return;
	if(t[pu]<t[pv])
		swap(pu,pv);
	t[pu]+=t[pv];
	par[pv]=pu;
}

int32_t main(){
	int n,k,m;
	cin >> n >> k;
	fill(par,par+MaxN,-1);
	fill(t,t+MaxN,1);
	for(int i=0;i<k;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		dsu(u,v);
	}
	cin >> m;
	for(int i=0;i<m;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		u=get_par(u);
		v=get_par(v);
		if(u==v)
			mark[u]=true;
	}
	int ans=0;
	for(int i=0;i<n;++i)
		if(par[i]==-1 && mark[i]==false)
			ans=max(ans,t[i]);
	cout << ans;
}