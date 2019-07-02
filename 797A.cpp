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

const int MaxN=1E6+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD='?';
vector <int> v;

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==0) return 1; return n*fact(n-1);}
int C(int n,int k){  if (k>n) return 0; if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}
int checkPrime(int n){ if (n==1) return false; for (int i=2;i*i<=n;++i) if (n%i==0) return false; return true;}
int lg(int n,int k=10){ int x=n,cnt=0; while (x){ ++cnt; x/=k;} return cnt;}
int bmm(int x,int y){ if (x%y==0) return y; return bmm(y,x%y);}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	cerr << fixed << setprecision(12);
	int n,k;
	cin >> n >> k;
	int tmp=n;
	for (int i=2;i*i<=n;++i)
		while (tmp%i==0){
			tmp/=i;
			v.pb(i);
		}
	if (tmp!=1)
		v.pb(tmp);
	if (k>v.size())
		return cout << -1, 0;
	for (int i=0;i<k-1;++i)
		cout << v[i] << " ";
	int cnt=1;
	for (int i=k-1;i<v.size();++i)
		cnt*=v[i];
	cout << cnt;
}