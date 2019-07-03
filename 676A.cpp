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
int a[MaxN];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==1) return 1; return ((n%MOD)*fact(n-1))%MOD;}
int C(int n,int k){ k=min(k,n-k); if (k==0) return 1; if (k==n) return 1; return (C(n-1,k)+C(n-1,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	int ind1,indn;
	for (int i=0;i<n;++i){
		cin >> a[i];
		if (a[i]==1)
			ind1=i;
		if (a[i]==n)
			indn=i;
	}
	if (ind1<indn)
		cout << indn-ind1+max(ind1,n-indn-1);
	else
		cout << ind1-indn+max(indn,n-ind1-1);
	return 0;
}