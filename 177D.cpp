#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN],b[MaxN],sum[MaxN];

int32_t main(){
	int n,m,c;
	cin >> n >> m >> c;
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<m;++i){
		cin >> b[i];
		sum[i+1]=sum[i]+b[i];
	}
	for(int i=0;i<n;++i){
		int l,r;
		if(i<m-1)
			r=i;
		else
			r=m-1;
		if(i<n-m)
			l=0;
		else
			l=m+i-n;
		int ans=sum[r+1]-sum[l]+a[i];
		ans%=c;
		cout << ans << " ";
	}
}