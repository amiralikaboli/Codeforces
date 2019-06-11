#include <bits/stdc++.h>

using namespace std;

const int MaxN=5+10;
const int MaxM=5E4+10;
int t[MaxM][MaxN];
int dp[MaxM][MaxN];

int main(){
	int n,m;
	cin >> m >> n;
	for (int i=1;i<=m;++i)
		for (int j=1;j<=n;++j)
			cin >> t[i][j];
	for (int i=1;i<=m;++i)
		for (int j=1;j<=n;++j)
			dp[i][j]=max(dp[i-1][j],dp[i][j-1])+t[i][j];
	for (int i=1;i<=m;++i)
		cout << dp[i][n] << " ";
}