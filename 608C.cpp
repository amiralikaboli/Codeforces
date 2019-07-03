#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN],b[MaxN];
bool mark[MaxN];
int ans[MaxN];
pair <int,int> p[MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i] >> b[i];
		p[i]=make_pair(a[i],b[i]);
	}
	sort(p,p+n);
	for (int i=0;i<n;++i){
		a[i]=p[i].first;
		b[i]=p[i].second;
	}
	for (int i=0;i<n;++i){
		int ind=lower_bound(a,a+(i+1),a[i]-b[i])-a;
		ans[i]+=i-ind;
		--ind;
		if (ind>=0)
			ans[i]+=ans[ind];
	}
	int mn=n;
	for (int i=0;i<n;++i)
		mn=min(mn,ans[i]+n-i-1);
	cout << mn;
}