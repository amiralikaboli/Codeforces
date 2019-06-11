#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>

const int MaxN=3E5+10;
const int MaxE=3E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int dp[MaxN],cnt[MaxN];
stack <int> stck;

struct edge{
	/* u--->v */
	int u;
	int v;
	int w;
}e[MaxE];

bool cmp(edge a,edge b){
	if (a.w==b.w){
		if (a.u==b.u)
			return a.v<b.v;
		return a.u<b.u;
	}
	return a.w<b.w;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;++i){
		int u,v,w;
		cin >> u >> v >> w;
		--u;
		--v;
		e[i].u=u;
		e[i].v=v;
		e[i].w=w;
	}
	sort(e,e+m,cmp);
	// for (int i=0;i<m;++i)
	// 	cerr << e[i].u+1 << " " << e[i].v+1 << " " << e[i].w << endl;
	for(int i=0;i<m;++i){
		int u=e[i].u;
		int v=e[i].v;
		cnt[v]=max(cnt[v],max(dp[u]+1,dp[v]));
		stck.push(v);
		if (i==m-1 || e[i].w!=e[i+1].w)
			while(!stck.empty()){
				int top=stck.top();
				dp[top]=max(dp[top],cnt[top]);
				cnt[top]=0;
				stck.pop();
			}
	}
	cout << *max_element(dp,dp+n);
}