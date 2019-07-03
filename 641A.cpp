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

const int MaxN=1E5+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int ind;
int l[MaxN];
char c[MaxN];
bool mark[MaxN]={true};

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}

void go(){
	if (c[ind]=='<')
		ind-=l[ind];
	else
		ind+=l[ind];
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> c[i];
	for (int i=0;i<n;++i)
		cin >> l[i];
	for (int t=0;t<n;++t){
		go();
		if (ind<0 || ind>=n){
			cout << "FINITE";
			return 0;
		}
		if (mark[ind]){
			cout << "INFINITE";
			return 0;
		}
		mark[ind]=true;
	}
	return 0;
}