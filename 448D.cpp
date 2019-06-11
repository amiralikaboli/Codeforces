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

const int MaxN=2E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int f(int x,int n,int m){
	int cnt=0;
	for (int i=1;1<=n;++i)
		cnt+=min(m,(x-1)/i);
	return cnt;
}

int32_t main(){
	int n,m,k;
	cin >> n >> m >> k;
	int l=1;
	int r=n*m+1;
	while (l<r){
		int mid=(l+r)/2;
		int cnt=0;
		for (int i=1;i<=n;++i)
			cnt+=min(m,(mid-1)/i);
		if (cnt<k)
			l=mid+1;
		else
			r=mid;
	}	
	cout << --l;
}