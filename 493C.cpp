#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define cout cout << setprecision(18)

const int MaxN=4E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
pii p[MaxN];

int32_t main(){
	int n,m;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> p[i].F;
	cin >> m;
	for (int i=n;i<n+m;++i){
		cin >> p[i].F;
		p[i].S=1;
	}
	sort(p,p+n+m);
	int firTeam=3*n;
	int secTeam=3*m;
	int mx=firTeam-secTeam;
	int cntFir=0,cntSec=0;
	for (int i=0;i<n+m;++i){
		cntFir+=(p[i].S==0);
		cntSec+=(p[i].S==1);
		int pointFir=2*cntFir+3*(n-cntFir);
		int pointSec=2*cntSec+3*(m-cntSec);
		if (mx<pointFir-pointSec){
			firTeam=pointFir;
			secTeam=pointSec;
			mx=pointFir-pointSec;
		}
	}
	cout << firTeam << ":" << secTeam;
}