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

const int MaxN=6+10;
const int MaxAlph=6+10;
const int MaxQ=36+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
string a[MaxQ],b[MaxQ];
int dp[MaxN][MaxAlph];//dp[l][c]=tedad donbalehaye be toole l ke ba c shooroo she

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n,q;
	cin >> n >> q;
	for (int i=0;i<q;++i)
		cin >> a[i] >> b[i];
	dp[1][0]=1;
	for (int l=2;l<=n;++l)
		for (int i=0;i<q;++i)
			dp[l][a[i][0]-'a']+=dp[l-1][b[i][0]-'a'];
	cout << dp[n][0]+dp[n][1]+dp[n][2]+dp[n][3]+dp[n][4]+dp[n][5];
}