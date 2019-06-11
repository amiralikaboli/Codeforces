#include <bits/stdc++.h>

using namespace std;

// #define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define X real()
#define Y imag()
// #define cout cout << setprecision(18)

const int MaxN=1E6+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
set <int> st;
vector <int> v;

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie();
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		st.insert(x);
	}
	for (set<int>::iterator it=st.begin();it!=st.end();++it)
		v.push_back(*it);
	int ans=0;
	for (int i=0;i<v.size();++i)
		for (int j=2*v[i];j<v[i]+MaxN;j+=v[i]){
			int ind=lower_bound(v.begin(),v.end(),j)-v.begin();
			--ind;
			if (ind>=0)
				ans=max(ans,v[ind]%v[i]);
		}
	cout << ans;
}