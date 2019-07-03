#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int ans=0;
	if((b-c)>=a)
		ans=n/a;
	else{
		if(n>=b){
			ans=(n-b)/(b-c)+1;
			n=n-(n-b)/(b-c)*(b-c)-b+c;
			ans=ans+n/a;
		}
		else
			ans=n/a;
	}
	cout << ans;
}