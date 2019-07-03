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
	ld n,r;
	cin >> n >> r;
	cout << n*r*r*(0.5*sin(2*pi/n)-sin(pi/n)*sin(pi/n)/tan(1.5*pi/n));
}