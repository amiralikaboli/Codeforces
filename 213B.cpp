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

const int MaxL=100+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int t[10];
int dp[MaxL][10];
int c[MaxL][MaxL];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==1) return 1; return ((n%MOD)*fact(n-1))%MOD;}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return (C(n-1,k)+C(n-1,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=0;i<10;++i)
		cin >> t[i];
	for (int i=0;i<=n;++i)
		for (int j=0;j<=i;++j){
			if (j==0)
				c[i][j]=1;
			else
				c[i][j]=(c[i-1][j]+c[i-1][j-1])%MOD;
		}
	for (int len=t[1];len<=n;++len)
		dp[len][1]=1;
	for (int last=2;last<10;++last)
		for (int len=0;len<=n;++len)
			for (int cnt=t[last];cnt<=n-len;++cnt){
				dp[len+cnt][last]+=(dp[len][last-1]*c[len+cnt][cnt])%MOD;
				dp[len+cnt][last]%=MOD;
			}
	for (int len=1;len<=n;++len)
		for (int cnt=t[0];cnt<=n-len;++cnt){
			dp[len+cnt][0]+=(dp[len][9]*c[len+cnt-1][cnt])%MOD;
			dp[len+cnt][0]%=MOD;
		}
	int ans=0;
	for (int len=0;len<=n;++len){
		ans+=dp[len][0];
		ans%=MOD;
	}
	cout << ans;
	return 0;
}