#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MOD=1000*1000*1000+7;

int tav(int n,int k){
	if (k==0)
		return 1;
	int x=tav(n,k/2);
	x*=x;
	x%=MOD;
	if (k%2)
		return (n*x)%MOD;
	else
		return x;
}

int32_t main(){
	int n;
	cin >> n;
	if (n==0){
		cout << 1 << endl;
		return 0;
	}
	int ans=tav(2,2*n-1)+tav(2,n-1);
	ans%=MOD;
	cout << ans;
}