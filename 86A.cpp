#include <bits/stdc++.h>

using namespace std;

#define int long long

int len(int n){
	int x=n;
	int cnt=0;
	while (x){
		++cnt;
		x/=10;
	}
	return cnt;
}

int f(int x){
	int cnt=1;
	for (int i=0;i<len(x);++i)
		cnt*=10;
	return cnt-x-1;
}

int32_t main(){
	int l,r;
	cin >> l >> r;
	int k=len(r);
	int ans=max(l*f(l),r*f(r));
	int x=(pow(10,k)-1)/2;
	if (l<=x && x<=r)
		ans=x*f(x);
	cout << ans;
}