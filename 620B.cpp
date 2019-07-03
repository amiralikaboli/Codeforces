#include <bits/stdc++.h>

using namespace std;

#define int long long

int t[]={6,2,5,5,4,5,6,3,7,6};
int ans=0;

void prcs(int n){
	int x=n;
	while (x){
		ans+=t[x%10];
		x/=10;
	}
}

int32_t main(){
	int l,r;
	cin >> l >> r;
	for (int i=l;i<=r;++i)
		prcs(i);
	cout << ans;
}