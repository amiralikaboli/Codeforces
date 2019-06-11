#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MOD=1000*1000*1000+7;

int32_t main(){
	int a,b;
	cin >> a >> b;
	int ans=0;
	for (int i=1;i<b;++i){
		int cnt=(a*(a+1)/2)%MOD;
		cnt*=i;
		cnt%=MOD;
		cnt*=b;
		cnt%=MOD;
		cnt+=(a*i)%MOD;
		cnt%=MOD;
		ans+=cnt;
		ans%=MOD;
	}
	cout << ans;
}