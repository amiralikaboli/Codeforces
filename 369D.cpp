#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=3E3+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int n,k,ans;
bool mark[MaxN][MaxN];
int p[MaxN],dp[MaxN];

int bpow(int n,int k){ if(k==0) return 1; int cnt=bpow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*bpow(n,k-1))%MOD;}

void f(int a,int b,int cnt){
	if (mark[a][b])
		return;
	mark[a][b]=true;
	++ans;
	if(cnt==k)
		return;
	if(b>=n)
		return;
	if(p[a] && dp[b])
		f(b+1,b+2,cnt+1);
	if(p[a] && dp[b]<100)
		f(a,b+1,cnt+1);
	if(p[a]<100 && dp[b])
		f(b,b+1,cnt+1); 
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> p[i];
	dp[n-1]=p[n-1];
	for (int i=n-2;i>=0;--i)
		dp[i]=max(p[i],dp[i+1]);
	f(0,1,0);
	cout << ans;
}
