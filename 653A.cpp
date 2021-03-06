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
int a[MaxN];

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return (cnt*cnt)%MOD; else return (n*pow(n,k-1))%MOD;}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	n=unique(a,a+n)-a;
	for (int i=0;i<n-2;++i)
		if (a[i+1]==a[i]+1 && a[i+2]==a[i]+2){
			cout << "YES";
			return 0;
		}
	cout << "NO";
}