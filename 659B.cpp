#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pis pair <int,string>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
vector <pis> v[MaxN];

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

bool cmp(pis a,pis b){
	if (a.F==b.F)
		return a.S<b.S;
	return a.F>b.F;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		string s;
		int r,p;
		cin >> s >> r >> p;
		v[r].pb(pis(p,s));
	}
	for (int i=1;i<=m;++i){
		sort(v[i].begin(),v[i].end(),cmp);
		if (v[i].size()>2 && v[i][1].F==v[i][2].F)
			cout << "?" << endl;
		else
			cout << v[i][0].S << " " << v[i][1].S << endl;
	}
}