#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define X real()
#define Y imag()
#define cout cout << setprecision(18)

const int MaxN=1E6+10;
const int MaxM=1E3+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int a[MaxN];
int dp[MaxM];

int32_t main(){
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	if (n>m){
		cout << "YES";
		return 0;
	}
	for (int i=1;i<=n;++i)
		cin >> a[i];
	for (int i=1;i<=n;++i){
		if (dp[a[i]%m]==0)
			dp[a[i]%m]=i;
		for (int j=0;j<m;++j)
			if (dp[j]>0 && dp[j]!=i && dp[(a[i]+j)%m]==0)
				dp[(a[i]+j)%m]=i;
	}
	cout << (dp[0]>0 ? "YES" : "NO");
}