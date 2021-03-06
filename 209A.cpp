#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E6+10;
const int MOD=1000*1000*1000+7;
int dp[MaxN];

int32_t main(){
	int n;
	cin >> n;
	dp[1]=1;
	dp[2]=3;
	for(int i=3;i<=n;++i){
		dp[i]=dp[i-1]+dp[i-2]+2;
		dp[i]%=MOD;
	}
	cout << dp[n];
}