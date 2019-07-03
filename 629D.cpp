#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pdd pair<ld,ld>
#define point complex<ld>

const ld pi=acos(-1);
const int MaxN=1E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
ld v[MaxN];
set <pdd> st;

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int r,h;
		cin >> r >> h;
		v[i]=r*r*h;
	}
	st.insert(pdd(0,0));
	for (int i=0;i<n;++i){
		set<pdd>::iterator it=st.upper_bound(pdd(v[i],-1));
		set<pdd>::iterator it2=it;
		--it;
		while(it2!=st.end() && it2->second<=it->second+v[i]){
			st.erase(it2);
			it2=st.upper_bound(pdd(v[i],-1));
		}
		st.insert(pdd(v[i],v[i]+it->second));
	}
	cout << fixed << setprecision(12) << pi*st.rbegin()->second;
}