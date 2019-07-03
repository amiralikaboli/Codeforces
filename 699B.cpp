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
pii r[MaxN],c[MaxN];
vector <point> v;

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
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			char a;
			cin >> a;
			if (a=='*'){
				v.pb(point(i,j));
				++r[i].F;
				++c[j].F;
			}
		}
	if (n==1 || m==1)
		return cout << "YES" << endl << "1 1", 0;
	for (int i=0;i<n;++i)
		r[i].S=i;
	for (int i=0;i<m;++i)
		c[i].S=i;
	sort(r,r+n);
	sort(c,c+m);
	if (r[n-2].F>1 || c[m-2].F>1)
		return cout << "NO", 0;
	int x=r[n-1].S,y=c[m-1].S;
	for (int j=0;j<m;++j){
		bool b=true;
		for (int l=0;l<v.size();++l)
			b&=(v[l].X==x || v[l].Y==j);
		if (b)
			return cout << "YES" << endl << x+1 << " " << j+1, 0;
	}
	for (int i=0;i<n;++i){
		bool b=true;
		for (int l=0;l<v.size();++l)
			b&=(v[l].X==i || v[l].Y==y);
		if (b)
			return cout << "YES" << endl << i+1 << " " << y+1, 0;
	}
	cout << "NO";
}