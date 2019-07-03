#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E3+10;
const int MOD=1000*1000*1000+7;
int c[MaxN];
int dp[MaxN][MaxN];

int32_t main(){
	int k;
	cin >> k;
	int n=0;
	for (int i=0;i<k;++i){
		cin >> c[i];
		n+=c[i];
	}
	for (int i=0;i<=n;++i){
		dp[i][i]=1;
		dp[i][0]=1;
	}
	for (int i=1;i<=n;++i)
		for (int j=1;j<=i;++j)
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%MOD;
	int ans=1;
	for (int i=k-1;i>=0;--i){
		//cerr << n << " " << c[i] << " " << dp[n-1][c[i]-1] << endl;
		ans*=dp[n-1][c[i]-1];
		ans%=MOD;
		n-=c[i];
	}
	cout << ans;
}