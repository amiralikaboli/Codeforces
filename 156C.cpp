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

const int MaxL=100+10;
const int MaxP=26*MaxL+10;
const ld eps=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int dp[MaxL][MaxP];

int ghadr(int x){ return max(x,-x);}
int bpow(int n,int k,int delta=MOD){ n%=delta; int ans=1; while(k){ if(k%2) ans=(n*ans)%delta; n=(n*n)%delta; k/=2;} return ans;}
int fact(int n){ if (n==1) return 1; return n*fact(n-1);}
int C(int n,int k){ if (k==0) return 1; if (k==n) return 1; return C(n-1,k)+C(n-1,k-1);}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	dp[0][0]=1;
	for(int len=1;len<MaxL;++len)
		for(int pnt=0;pnt<MaxP;++pnt)
			for(int alph=0;alph<=min(25LL,pnt);++alph){
				dp[len][pnt]+=dp[len-1][pnt-alph];
				dp[len][pnt]%=MOD;
			}
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum=0;
		for(int i=0;i<s.size();++i)
			sum+=s[i]-'a';
		cout << dp[s.size()][sum]-1 << endl;
	}
	return 0;
}