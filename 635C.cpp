#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int sum,xr;
	cin >> sum >> xr;
	int d=sum-xr;
	if (d%2 || d<0){
		cout << 0;
		return 0;
	}
	int ans=0;
	if (d==0)
		ans-=2;
	int cnt=__builtin_popcountll(xr);
	ans+=(1LL<<cnt);
	cout << (xr&(d/2) ? 0 : ans);
}