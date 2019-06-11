#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define int long long
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define point complex<ld>

const int MaxN=1E3+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int dp[MaxN][MaxN];

int32_t main (){
	int n,d,k;
	cin >> n >> k >> d;
	if (log(n)>d*log(k)+EPS){
		cout << -1;
		return 0;
	}
	for (int i=1;i<n;++i){
		for (int j=0;j<d;++j)
			dp[i][j]=dp[i-1][j];
		for (int j=d-1;j>=0;--j){
			dp[i][j]=(dp[i][j]+1)%k;
			if (dp[i][j])
				break;
		}
	}
	for (int i=0;i<d;++i){
		for (int j=0;j<n;++j)
			cout << dp[j][i]+1 << " ";
		cout << endl;
	}
}