#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN];

int32_t main(){
	int n,k;
	cin >> n >> k;
	--k;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	int l=lower_bound(a,a+n,a[k/n])-a;
	int r=upper_bound(a,a+n,a[k/n])-a;
	--r;
	int t=r-l+1;
	cout << a[k/n] << " " << a[(k-n*l)/t];
}