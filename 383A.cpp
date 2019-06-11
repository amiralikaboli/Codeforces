#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	int cnt=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		(x==1 ? ++cnt : ans+=cnt);
	}
	cout << ans;
}