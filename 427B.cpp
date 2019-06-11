#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int dp[MaxN];
int a[MaxN];

int main(){
	int n,c,t;
	cin >> n >> t >> c;
	cin >> a[0];
	if (a[0]<=t)
		dp[0]=1;
	for (int i=1;i<n;++i){
		cin >> a[i];
		dp[i]=dp[i-1];
		if (a[i]<=t)
			++dp[i];
	}
	int ans=0;
	if (dp[c-1]==c)
		++ans;
	for (int i=c;i<n;++i)
		if (dp[i]-dp[i-c]==c)
			++ans;
	cout << ans;
}