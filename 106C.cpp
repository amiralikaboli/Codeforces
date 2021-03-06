#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
const int MaxM=10+10;
int a[MaxM],b[MaxM],c[MaxM],d[MaxM];
int dp[MaxN][MaxM];

int main() {
	int n,m;
	cin >> n >> m >> c[0] >> d[0];
	for (int i=1;i<=n;++i)
		dp[i][0]=(i/c[0])*d[0];
	for (int i=1;i<=m;++i)
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	for (int i=0;i<=n;++i)
		for (int j=1;j<=m;++j)
			for(int l=0;l*c[j]<=i && l*b[j]<=a[j];++l)
				dp[i][j]=max(dp[i][j],l*d[j]+dp[i-l*c[j]][j-1]);
	cout << dp[n][m];
}