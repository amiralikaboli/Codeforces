#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E3+10;
int a[MaxN],b[MaxN];
int dp1[MaxN][MaxN],dp2[MaxN][MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		dp1[i][i]=a[i];
	}
	for (int i=0;i<n;++i){
		cin >> b[i];
		dp2[i][i]=b[i];
	}
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			dp1[i][j]=dp1[i][j-1]|a[j];
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			dp2[i][j]=dp2[i][j-1]|b[j];
	int ans=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			ans=max(ans,dp1[i][j]+dp2[i][j]);
	cout << ans;
}