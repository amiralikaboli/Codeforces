#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=2;i<n;++i){
		int x=n;
		while (x){
			ans+=x%i;
			x/=i;
		}
	}
	cout << ans/__gcd(ans,n-2) << "/" << (n-2)/__gcd(ans,n-2);
}