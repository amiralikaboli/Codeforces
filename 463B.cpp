#include <iostream>

using namespace std;

const int MaxN=1E5+10;
int h[MaxN];
int dp[MaxN];

int main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=0;i<n;++i)
		cin >> h[i];
	dp[0]=-h[0];
	for (int i=1;i<n;++i)
		dp[i]=dp[i-1]+h[i-1]-h[i];
	int mn=0;
	for (int i=0;i<n;++i)
		mn=min(mn,dp[i]);
	cout << -mn;
}