#include <iostream>

using namespace std;

long long dp[111111],t[111111];

int main (){
	int n;
	cin >> n;
	int mx=0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		++t[a];
		mx=max(mx,a);
	}
	dp[1]=t[1];
	for (int i=2;i<=mx;++i)
		dp[i]=max(dp[i-1],dp[i-2]+t[i]*i);
	cout << dp[mx];
}