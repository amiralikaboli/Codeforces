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
#define pci pair<char,int>

const int MaxN=1E6+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
deque <pci> deq;

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
	string s;
	cin >> s;
	deq.pb(pci(s[0],1));
	for (int i=1;i<s.size();++i)
		if (s[i]==s[i-1])
			++deq.back().S;
		else
			deq.pb(pci(s[i],1));
	if (deq[0].F=='b')
		deq.pop_front();
	if (deq.back().F=='a')
		deq.pop_back();
	if (deq.size()==0)
		return cout << 0, 0;
	int ans=0;
	for (int i=deq.size()-1;i>=0;i-=2){
		ans=(ans+(deq[i].S*((bpow(2,deq[i-1].S)-1+MOD)%MOD))%MOD)%MOD;
		if (i!=1)
			deq[i-2].S=(deq[i-2].S+(bpow(2,deq[i-1].S)*deq[i].S)%MOD)%MOD;
	}
	cout << ans;
}