#include <bits/stdc++.h>

using namespace std;

#define int long long

int const MaxN=1E5+10;
int a[MaxN],dp_s[MaxN],dp_e[MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	if (n==1){
		cout << 1;
		return 0;
	}
	int ans=0;
	for (int i=1;i<=n;++i){
		if (a[i]>a[i-1])
			dp_s[i]=dp_s[i-1]+1;
		else
			dp_s[i]=1;
		ans=max(ans,dp_s[i]);
	}
	for (int i=n;i>=1;--i){
		if (a[i+1]>a[i])
			dp_e[i]=dp_e[i+1]+1;
		else
			dp_e[i]=1;
	}
	if (ans<n)
		++ans;
	for (int i=2;i<=n;++i)
		if (a[i-1]+1<a[i+1])
			ans=max(ans,dp_s[i-1]+dp_e[i+1]+1);
	cout << ans;
}