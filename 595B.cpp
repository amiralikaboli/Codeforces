#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define double long double
#define f first
#define s second
#define pii pair<int,int>
#define point complex<ld>

const int MaxN=1E5+10;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int a[MaxN],b[MaxN];

int32_t main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n/k;++i)
		cin >> a[i];
	for (int i=0;i<n/k;++i)
		cin >> b[i];
	int t10=1;
	for (int i=1;i<k;++i)
		t10*=10;
	int ans=1;
	for (int i=0;i<n/k;++i){
		int cnt1=(t10*10-1)/a[i]+1;
		// cerr << "cnt1:" << cnt1 << endl;
		int cnt2=(b[i] ? ((b[i]+1)*t10-1)/a[i]-(b[i]*t10-1)/a[i] : ((b[i]+1)*t10-1)/a[i]+1);
		// cerr << "cnt2:" << cnt2 << endl;
		// cerr << "delta:" << cnt1-cnt2 << endl;
		ans*=(cnt1-cnt2);
		ans%=MOD;
		// cerr << "ans:" << ans << endl;
	}
	cout << ans;
}