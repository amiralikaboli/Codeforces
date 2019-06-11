#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
const int MOD=1000*1000*1000+7;
int dp[MaxN][MaxN];

int main(){
	int n,l;
	cin >> n >> l;
	for (int i=1;i<=n;++i)
		dp[i][1]=1;
	for (int i=1;i<=n;++i)
		for (int j=2;j<=l;++j)
			for (int k=i;k<=n;k+=i){
				dp[k][j]+=dp[i][j-1];
				dp[k][j]%=MOD;
			}
	int ans=0;
	for (int i=1;i<=n;++i){
		ans+=dp[i][l];
		ans%=MOD;
	}
	cout << ans;
}