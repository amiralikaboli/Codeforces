#include <bits/stdc++.h>

using namespace std;

#define int long long

int len(int n,int k){
	int x=n;
	int cnt=0;
	while (x){
		++cnt;
		x/=k;
	}
	return cnt;
}

int32_t main(){
	int l,r,k;
	cin >> l >> r >> k;
	int cnt=0;
	int ans=1;
	for (int i=0;i<len(r,k);++i){
		if (ans>=l && ans<=r){
			++cnt;
			cout << ans << " ";
		}
		ans*=k;
	}
	if (cnt==0)
		cout << -1;
}