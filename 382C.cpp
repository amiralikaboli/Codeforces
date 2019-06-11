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
set <int> st;
map <int,int> mp;

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	if (n==1){
		cout << -1;
		return 0;
	}
	for (int i=1;i<n;++i){
		++mp[a[i]-a[i-1]];
		st.insert(a[i]-a[i-1]);
	}
	if (st.size()>2){
		// cerr << '$';
		cout << 0;
		return 0;
	}
	int x=*st.begin();
	int y=*st.rbegin();
	cerr << x << " " << y << endl;
	if (st.size()==2 && mp[x]!=n-2){
		// cerr << '#';
		cout << 0;
		return 0;
	}
	if (st.size()==2){
		if (2*x==y){
			for (int i=1;i<n;++i)
				if (a[i]-a[i-1]==y){
					cout << 1 << endl << a[i-1]+x;
					return 0;
				}
		}
		else{
			// cerr << '&';
			cout << 0;
			return 0;
		}
	}
	if (x==0)
		cout << 1 << endl << a[0];
	else if (x%2==0 && n==2)
		cout << 3 << endl << a[0]-x << " " << a[0]+x/2 << " " << a[1]+x;
	else
		cout << 2 << endl << a[0]-x << " " << a[n-1]+x;
}