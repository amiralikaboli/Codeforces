#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define cout cout << setprecision(18)

const int MaxN=1E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int32_t main(){
	int p;
	cin >> p;
	int ans=0;
	for (int i=1;i<p;++i){
		int cnt=1;
		bool b=true;
		for (int j=1;j<=p-2;++j){
			cnt*=i;
			cnt%=p;
			if (cnt==1)
				b=false;
		}
		cnt*=i;
		cnt%=p;
		if (cnt!=1)
			b=false;
		ans+=b;
	}
	cout << ans;
}