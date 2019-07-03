#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define pi acos(-1)
#define X real()
#define Y imag()
#define point complex<ld>

const int MaxN=2E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k){ if(k==0) return 1; int cnt=bpow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*cnt*cnt)%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int a,b,c;
	cin >> a >> b >> c;
	if (c==0)
		if (a==b)
			cout << "YES";
		else
			cout << "NO";
	else if ((b-a)%c==0 && (b-a)/c>=0)
		cout << "YES";
	else
		cout << "NO";
}