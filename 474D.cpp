#include <iostream>

using namespace std;

const int MOD=1000*1000*1000+7;
const int MaxN=1E5+10;
int dp[MaxN];

int main(){
	int t,k;
	cin >> t >> k;
	for (int i=0;i<k;++i)
		dp[i]=1;
	for (int i=k;i<MaxN;++i){
		dp[i]=dp[i-1]+dp[i-k];
		dp[i]%=MOD;
	}
	for (int i=1;i<MaxN;++i){
		dp[i]=dp[i]+dp[i-1];
		dp[i]%=MOD;
	}
	for (int i=0;i<t;++i){
		int s,e;
		cin >> s >> e;
		--s;
		cout << (dp[e]-dp[s]+MOD)%MOD << endl;
	}
}