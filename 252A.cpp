#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=100+10;
int a[MaxN];

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ans=0;
	for (int i=0;i<n;++i)
		for (int j=i;j<n;++j){
			int cnt=a[i];
			for (int l=i+1;l<=j;++l)
				cnt^=a[l];
			ans=max(ans,cnt);
		}
	cout << ans;
}