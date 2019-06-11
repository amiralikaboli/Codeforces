#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int tim;
bool mark[MaxN];
int dist[MaxN],strt_time[MaxN],fnsh_time[MaxN],c[MaxN],p_or_m[MaxN];
int seg[4*MaxN];
vector <int> adj[MaxN];

void dfs(int root){
	mark[root]=true;
	strt_time[root]=tim++;
	for (int i=0;i<adj[root].size();++i)
		if (mark[adj[root][i]]==false){
			dist[adj[root][i]]=dist[root]+1;
			dfs(adj[root][i]);
		}
	fnsh_time[root]=tim;
}

void update(int l,int r,int val,int s,int e,int ind){
	if (e<=l || s>=r)
		return;
	if (l<=s && e<=r){
		seg[ind]+=val;
		return;
	}
	int mid=(s+e)/2;
	update(l,r,val,s,mid,2*ind+0);
	update(l,r,val,mid,e,2*ind+1);
}

int get(int p,int s,int e,int ind){
	if (e-s==1)
		return seg[ind];
	int mid=(s+e)/2;
	int ans=seg[ind];
	if (p<mid)
		ans+=get(p,s,mid,2*ind+0);
	else
		ans+=get(p,mid,e,2*ind+1);
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	int n,q;
	cin >> n >> q;
	for (int i=0;i<n;++i)
		cin >> c[i];
	for (int i=0;i<n-1;++i){
		int u,v;
		cin >> u >> v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(0);
	for (int i=0;i<n;++i)
		if (dist[i]%2)
			p_or_m[i]=-1;
		else
			p_or_m[i]=1;
	for (int i=0;i<n;++i)
		update(strt_time[i],strt_time[i]+1,c[i]*p_or_m[i],0,n,1);
	for (int i=0;i<q;++i){
		int h;
		cin >> h;
		if (h==1){
			int val,p;
			cin >> p >> val;
			--p;
			val*=p_or_m[p];
			update(strt_time[p],fnsh_time[p],val,0,n,1);
		}
		else{
			int p;
			cin >> p;
			--p;
			cerr << "out:";
			cout << get(strt_time[p],0,n,1)*p_or_m[p] << endl;
		}
	}
}