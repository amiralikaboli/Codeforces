#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int h[MaxN];
int dp[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> h[i];
	for (int i=1;i<=n;++i)
		dp[i]=min(h[i],dp[i-1]+1);
	for (int i=n;i>=1;--i)
		dp[i]=min(dp[i],dp[i+1]+1);
	cout << *max_element(dp,dp+n+1);
}