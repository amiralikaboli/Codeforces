#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int sum=0;
	int mx=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		mx=max(mx,x);
		sum+=x;
	}
	int ans=(sum+n-2)/(n-1);
	cout << max(ans,mx);
}