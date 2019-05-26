#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=5E3+10;
const int MaxM=1E5+10;
const int MaxW=1E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int n,m,k;
int h[MaxN],deg[MaxN],par[MaxN];
vector <int> ans;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

struct edge{
	int u;
	int v;
	int w;
	int ind;
}e[MaxM];

bool cmp(edge a,edge b){
	if (a.w==b.w)
		return (a.u==0 || a.v==0);
	return a.w<b.w;
}

int find_root(int v){
	if (par[v]==v)
		return v;
	return par[v]=find_root(par[v]);
}

void addEdge(int m){
	int u=e[m].u;
	int v=e[m].v;
//check vertex 0
	if (u>v)
		swap(u,v);
	if (u==0 && deg[u]==k)
		return;
//add edge
	int ru=find_root(u);
	int rv=find_root(v);
	if (h[ru]<h[rv])
		par[ru]=rv;
	else if (h[ru]>h[rv])
		par[rv]=ru;
	else{
		par[ru]=rv;
		++h[rv];
	}
	++deg[u];
	++deg[v];
	ans.push_back(e[m].ind);
}

bool MST(int val){
//maghadir e avalie
	ans.clear();
	for (int i=0;i<n;++i){
		par[i]=i;
		h[i]=0;
		deg[i]=0;
	}
	for (int i=0;i<m;++i)
		if (e[i].u==0 || e[i].v==0)
			e[i].w-=val;
	sort(e,e+m,cmp);
//add edge
	for (int i=0;i<m;++i)
		if (find_root(e[i].u)!=find_root(e[i].v))
			addEdge(i);
//bargardan e maghadir e avalie
	for (int i=0;i<m;++i)
		if (e[i].u==0 || e[i].v==0)
			e[i].w+=val;
	for (int i=0;i<n;++i)
		if (deg[i]==0)
			return false;
	return (deg[0]==k);
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
//input
	cin >> n >> m >> k;
	for (int i=0;i<m;++i){
		cin >> e[i].u >> e[i].v >> e[i].w;
		--e[i].u;
		--e[i].v;
		e[i].ind=i+1;
	}
	if (n==1 && k==0){
		cout << 0;
		return 0;
	}
//binary search
	if (!MST(MaxW)){
		cout << -1;
		return 0;
	}
	int l=-MaxW,r=MaxW;
	while (r-l>1){
		int mid=(l+r)/2;
		if (MST(mid))
			r=mid;
		else
			l=mid;
	}
	MST(r);
//output
	cout << ans.size() << endl;
	for (int i=0;i<ans.size();++i)
		cout << ans[i] << " ";
}