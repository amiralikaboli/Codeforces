#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=777+10;
int dp[MaxN][MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<MaxN;++i)
		dp[i][0]=1;
	for (int i=1;i<=n;++i)
		for (int j=1;j<10;++j)
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
	int ans=dp[n][5]+dp[n][6]+dp[n][7];
	cout << ans;
}