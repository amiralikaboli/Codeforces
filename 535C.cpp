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

const int MaxN=1E6+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int a,b,n;
	cin >> a >> b >> n;
	for (int i=0;i<n;++i){
		int x,t,m;
		cin >> x >> t >> m;
		int l=x-1,r=MaxN;
		while(r-l>1){
			int mid=(l+r)/2;
			if((a*(mid-x+1))+(b*(mid-x+1)*(mid+x-2)/2)<=m*t && a+(mid-1)*b<=t)
				l=mid;
			else
				r=mid;
		}
		if(l==x-1)
			cout << -1 << endl;
		else
			cout << l << endl;
	}
}