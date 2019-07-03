#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double

const int MaxN=1E5+10;
int g[MaxN],t[MaxN];

int32_t main(){
	int n,p;
	cin >> n >> p;
	for (int i=0;i<n;++i){
		int l,r;
		cin >> l >> r;
		t[i]=r-l+1;
		g[i]=r/p-(l-1)/p;
	}
	ld ans=0;
	for (int i=0;i<n;++i){
		int j=(i+1)%n;
		int cnt=g[i]*t[j]+g[j]*t[i]-g[i]*g[j];
		int dmn=t[i]*t[j];
		ans+=(ld)1*cnt/dmn;
	}
	cout << setprecision(18) << (ld)2000*ans;
}