#include <iostream>
#include <algorithm>
using namespace std;
int dp[5000],a[3];
int main (){
	int n;
	cin >> n >> a[0] >> a[1] >> a[2];
	sort (a,a+3);
	dp[a[0]]=1;
	dp[a[1]]=1;
	dp[a[2]]=1;
	for (int i=a[0];i<=a[1];++i)
		if (dp[i-a[0]]!=0)
			dp[i]=max(dp[i],dp[i-a[0]]+1);
	for (int i=a[1]+1;i<=a[2];++i){
		int x=dp[i];
		if (dp[i-a[0]]!=0)
			dp[i]=dp[i-a[0]]+1;
		if (dp[i-a[1]]!=0)
			dp[i]=max(dp[i],dp[i-a[1]]+1);
		dp[i]=max(dp[i],x);
	}
	for (int i=a[2]+1;i<=n;++i){
		int x=dp[i];
		if (dp[i-a[0]]!=0)
			dp[i]=dp[i-a[0]]+1;
		if (dp[i-a[1]]!=0)
			dp[i]=max(dp[i],dp[i-a[1]]+1);
		if (dp[i-a[2]]!=0)
			dp[i]=max(dp[i],dp[i-a[2]]+1);
		dp[i]=max(dp[i],x);
	}
	cout << dp[n];
}
