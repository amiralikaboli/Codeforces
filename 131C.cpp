#include <bits/stdc++.h>

using namespace std;

long long c[100][100];

int main(){
	c[0][0]=1;
	for (int i=1;i<=30;++i)
		c[i][0]=1;
	for (int i=1;i<=30;++i)
		for (int j=1;j<=30;++j)
			c[i][j]=c[i-1][j]+c[i-1][j-1];
	long long n,m,t;
	cin >> n >> m >> t;
	long long ans=0;
	for (int i=4;i<=min(t-1,n);++i)
		ans+=c[n][i]*c[m][t-i];
	cout << ans;
}