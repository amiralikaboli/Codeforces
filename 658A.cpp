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
int p[MaxN],t[MaxN];

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(); cout.tie();
	cout << fixed << setprecision(12);
	int n,c;
	cin >> n >> c;
	for (int i=0;i<n;++i)
		cin >> p[i];
	for (int i=0;i<n;++i)
		cin >> t[i];
	int limak=0,radewoosh=0;
	int sumTime=0;
	for (int i=0;i<n;++i){
		sumTime+=t[i];
		limak+=max(0LL,p[i]-c*sumTime);
	}
	sumTime=0;
	for (int i=n-1;i>=0;--i){
		sumTime+=t[i];
		radewoosh+=max(0LL,p[i]-c*sumTime);
	}
	if (limak==radewoosh)
		cout << "Tie";
	else if (limak>radewoosh)
		cout << "Limak";
	else
		cout << "Radewoosh";
}