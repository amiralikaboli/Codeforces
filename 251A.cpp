#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int x[MaxN];

int32_t main(){
	int n,d;
	cin >> n >> d;
	for (int i=0;i<n;++i)
		cin >> x[i];
	int ans=0;
	for (int i=n-1;i>=1;--i){
		int ind=lower_bound(x,x+n,x[i]-d)-x;
		int t=i-ind;
		ans+=t*(t-1)/2;
	}
	cout << ans;
}