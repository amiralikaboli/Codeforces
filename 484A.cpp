#include <bits/stdc++.h>

using namespace std;

#define int long long

int solve (int l,int r){
	if (l==1 && r==1) 
		return 1;
	int t=1;
	while (2*t-1<=r)
		t*=2 ;
	if (t-1>=l)
		return t-1;
	return t+solve(l-t,r-t);
}

int32_t main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int l,r;
		cin >> l >> r;
		cout << solve(l,r) << endl;
	}
}
