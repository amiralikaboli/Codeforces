#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=5E3+10;
int a[MaxN];
int sum[MaxN];
int dp[MaxN][MaxN];

int32_t main(){
	int n,m,k;
	cin >> n >> m >> k;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	for (int i=1;i<=n;++i)
		sum[i]=sum[i-1]+a[i];
	for (int i=1;i<=k;++i){
		dp[i][i*m]=sum[i*m];
		for (int j=i*m+1;j<=n;++j)
			dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+sum[j]-sum[j-m]);
	}
	cout << dp[k][n];
}