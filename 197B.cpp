#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define double long double
#define f first
#define s second
#define pii pair<int,int>
#define point complex<ld>

const int MaxN=1E5+10;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;
int a[MaxN],b[MaxN];

int32_t main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<=n;++i)
		cin >> a[i];
	for(int i=0;i<=m;++i)
		cin >> b[i];
	if(m>n)
		cout << "0/1";
	else if(n>m){
		if(a[0]*b[0]>0)
			cout << "Infinity";
		else
			cout << "-Infinity";
	}
	else{
		int gcd=__gcd(a[0],b[0]);
		a[0]/=gcd;
		b[0]/=gcd;
		if(b[0]<0){
			a[0]*=-1;
			b[0]*=-1;
		}
		cout << a[0] << "/" << b[0];
	}
}