#include <bits/stdc++.h>

using namespace std;

#define int double

int32_t main(){
	int a,b,c;
	cin >> a >> b >> c;
	int ans=a*a*a/sqrt(2)/6;
	ans+=b*b*b*sqrt(2)/6;
	ans+=c*c*c*(5+sqrt(5))/24;
	cout << setprecision(18) << ans;
}