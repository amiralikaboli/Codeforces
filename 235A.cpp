#include <bits/stdc++.h>

using namespace std;

#define int long long

int lcm(int a,int b,int c){
	return a*b*c/__gcd(a,c);
}

int32_t main(){
	int n;
	cin >> n;
	if (n<=2)
		cout << n;
	else if (n%2)
		cout << n*(n-1)*(n-2);
	else{
		int ans=(n-1)*(n-2)*(n-3);
		ans=max(ans,lcm(n,n-1,n-2));
		ans=max(ans,lcm(n,n-1,n-3));
		ans=max(ans,lcm(n,n-1,n-4));
		ans=max(ans,lcm(n,n-1,n-5));
		cout << ans;
	}
}