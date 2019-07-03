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

const int MaxN=2E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int a[MaxN];
int s[MaxN],e[MaxN];

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n,k,x;
	cin >> n >> k >> x;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	int cnt=1;
	for (int i=0;i<k;++i)
		cnt*=x;
	for (int i=1;i<=n;++i)
		s[i]=s[i-1]|a[i];
	for(int i=n;i>=1;--i)
		e[i]=e[i+1]|a[i];
	int ans=0;
	for (int i=1;i<=n;++i)
		ans=max(ans,s[i-1]|e[i+1]|(cnt*a[i]));
	cout << ans;
}