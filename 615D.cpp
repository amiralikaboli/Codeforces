#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
const int MOD=1000*1000*1000+7;
int t[MaxN],pre[MaxN],suf[MaxN];

int tav(int n,int k){
	int ans=1;
	while (k){
		if (k%2){
			ans*=n;
			ans%=MOD;
		}
		n*=n;
		n%=MOD;
		k/=2;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int p;
		cin >> p;
		++t[p];
	}
	pre[0]=1;
	int cnt=1;
	for (int i=1;i<MaxN;++i){
		pre[i]=pre[i-1]*(t[i-1]+1);
		pre[i]%=(MOD-1);
	}
	suf[MaxN-1]=1;
	for (int i=MaxN-2;i>=0;--i){
		suf[i]=suf[i+1]*(t[i]+1);
		suf[i]%=(MOD-1);
	}
	int ans=1;
	for (int i=0;i<MaxN;++i)
		for (int j=1;j<=t[i];++j){
			int k=pre[i]*suf[i+1];
			k%=(MOD-1);
			ans*=tav(tav(i,j),k);
			ans%=MOD;
		}
	cout << ans;
}