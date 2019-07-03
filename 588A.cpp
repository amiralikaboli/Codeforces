#include <iostream>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN],dp[MaxN],p[MaxN];

int main(){
	int n;
	cin >> n;
	cin >> a[0] >> p[0];
	dp[0]=p[0];
	for (int i=1;i<n;++i){
		cin >> a[i] >> p[i];
		dp[i]=min(dp[i-1],p[i]);
	}
	int ans=0;
	for (int i=0;i<n;++i)
		ans+=a[i]*dp[i];
	cout << ans;
}