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
	int n,m,k;
	cin >> n >> m >> k;
	if(n<k)
		cout << pow(m,n);
	else if (k==1)
		cout << pow(m,n);
	else if(k%2==0){
		if(n==k)
			cout << pow(m,n/2);
		else
			cout << m;
	}
	else if(n==k)
		cout << pow(m,n/2+1);
	else
		cout << (m*m)%MOD;
}