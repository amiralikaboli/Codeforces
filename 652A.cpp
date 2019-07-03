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
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int h1,h2,a,b;
	cin >> h1 >> h2 >> a >> b;
	if (8*a+h1>=h2){
		cout << 0;
		return 0;
	}
	h1+=8*a;
	int dv=a-b;
	int dh=h2-h1;
	if (dv<=0){
		cout << -1;
		return 0;
	}
	cout << (int)ceil(dh/12./dv);
}