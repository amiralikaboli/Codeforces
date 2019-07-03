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
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int a,b,c,l;
	cin >> a >> b >> c >> l;
	int ans=(l+3)*(l+2)*(l+1)/6;
	for (int i=max(0LL,b+c-a);i<=l;++i){
		int cnt=min(a+i-b-c,l-i);
		ans-=(cnt+2)*(cnt+1)/2;
	}
	for (int i=max(0LL,a+c-b);i<=l;++i){
		int cnt=min(-a+b+i-c,l-i);
		ans-=(cnt+2)*(cnt+1)/2;
	}
	for (int i=max(0LL,a+b-c);i<=l;++i){
		int cnt=min(-a-b+c+i,l-i);
		ans-=(cnt+2)*(cnt+1)/2;
	}
	cout << ans;
	return 0;
}