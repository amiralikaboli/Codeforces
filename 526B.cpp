#include <bits/stdc++.h>

using namespace std;

const int MaxN=(1<<10)+10;
int n,mx,ans;
int a[MaxN],dp[MaxN];

void dfs(int v,int cnt){
	if(v>=(1<<(n+1)))
		return;
	int val=mx-cnt-dp[v];
	ans+=val;
	dfs(2*v+0,cnt+val);
	dfs(2*v+1,cnt+val);
}

int main(){
	cin >> n;
	for (int i=2;i<(1<<(n+1));++i)
		cin >> a[i];
	for(int i=(1<<n);i<(1<<(n+1));++i){
		int ind=i,val=0;
		while(ind>1){
			val+=a[ind];
			ind/=2;
		}
		mx=max(mx,val);
		ind=i;
		while(ind>1){
			dp[ind]=max(dp[ind],val);
			ind/=2;
		}
	}
	dp[1]=mx;
	dfs(1,0);
	cout << ans;
}