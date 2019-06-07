#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN],l[MaxN],r[MaxN],d[MaxN];
int dp[MaxN][2],t[MaxN];

int32_t main(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<m;++i)
		cin >> l[i] >> r[i] >> d[i];
	for(int i=0;i<k;++i){
		int x,y;
		cin >> x >> y;
		--x;
		++dp[x][0];
		++dp[y][1];
	}
	int cnt=0;
	for(int i=0;i<m;++i){
		cnt+=dp[i][0]-dp[i][1];
		t[i]=cnt;
	}
	memset(dp,0,sizeof dp);
	for(int i=0;i<m;++i){
		--l[i];
		dp[l[i]][0]+=d[i]*t[i];
		dp[r[i]][1]+=d[i]*t[i];
	}
	cnt=0;
	for(int i=0;i<n;++i){
		cnt+=dp[i][0]-dp[i][1];
		cout << cnt+a[i] << " ";
	}
}