#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=100+10;
const int MaxAi=300+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int lis[MaxN][MaxN];
int dist[MaxAi][MaxAi];
int dp[MaxAi][MaxAi];

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n,t;
	cin >> n >> t;
	for (int i=0;i<n;++i)
		cin >> a[i];
//LIS i to j
	for (int i=0;i<n;++i){
		lis[i][i]=1;
		for (int j=i+1;j<n;++j)
			for (int l=i;l<j;++l)
				if (a[j]>=a[l] && a[j]>=a[i])
					lis[i][j]=max(lis[i][j],lis[i][l]+1);
	}
//find max dist (a[i],a[j])
	for (int i=0;i<n;++i)
		for (int j=i;j<n;++j)
			dist[a[i]][a[j]]=max(dist[a[i]][a[j]],lis[i][j]);
//
	for (int i=1;i<MaxAi;++i){
		for (int j=0;j<MaxAi;++j)
			for (int l=0;l<=j;++l)
				dp[i][j]=max(dp[i][j],dp[i-1][l]+dist[l][j]);
		for (int j=1;j<MaxAi;++j)
			dp[i][j]=max(dp[i][j],dp[i][j-1]);
	}
//
	int lst=min(MaxAi-1,t);
	int mx=0;
	for (int i=0;i<MaxAi;++i)
		mx=max(mx,dist[i][i]);
	int ans=0;
	for (int i=0;i<MaxAi;++i)
		ans=max(ans,dp[lst][i]);
	ans+=mx*(t-lst);
	cout << ans;
}