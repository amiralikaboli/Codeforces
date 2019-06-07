#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E5+10;
int a[MaxN];
int t[MaxN],cnt[MaxN];

int32_t main(){
	ios::sync_with_stdio(false);
	int n,q;
	cin >> n >> q;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<q;++i){
		int l,r;
		cin >> l >> r;
		--l;
		++cnt[l];
		--cnt[r];
	}
	t[0]=cnt[0];
	for (int i=1;i<n;++i)
		t[i]+=cnt[i]+t[i-1];
	sort(a,a+n);
	sort(t,t+n);
	int ans=0;
	for (int i=0;i<n;++i)
		ans+=a[i]*t[i];
	cout << ans;
}