#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=2E5+10;
int a[MaxN];
map <int,int> l,r;

int32_t main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> a[i];
		++r[a[i]];
	}
	int ans=0;
	for (int i=0;i<n;++i){
		--r[a[i]];
		if (a[i]%k==0)
			ans+=l[a[i]/k]*r[a[i]*k];
		++l[a[i]];
	}
	cout << ans;
}