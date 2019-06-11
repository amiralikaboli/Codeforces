#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
const int MOD=1000*1000*1000+7;
int dp_all[MaxN],dp_d[MaxN];

int32_t main(){
	int n,k,d;
	cin >> n >> k >> d;
	dp_all[0]=1;
	for(int i=0;i<=n;++i)
		for(int j=1;j<=k;++j){
			dp_all[i+j]+=dp_all[i];
			dp_all[i+j]%=MOD;
		}
	dp_d[0]=1;
	for(int i=0;i<=n;++i)
		for(int j=1;j<=k && j<d;++j){
			dp_d[i+j]+=dp_d[i];
			dp_d[i+j]%=MOD;
		}
	cout << (dp_all[n]-dp_d[n]+MOD)%MOD;
}