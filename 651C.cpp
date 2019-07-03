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
map <int,int> mpx,mpy;
map <pii,int> mp;

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	for(int i=0;i<n;++i){
		int x,y;
		cin >> x >> y;
		ans+=mpx[x]+mpy[y]-mp[pii(x,y)];
		++mpx[x];
		++mpy[y];
		++mp[pii(x,y)];
	}
	cout << ans;
}