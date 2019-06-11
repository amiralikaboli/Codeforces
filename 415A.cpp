#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int ans[MaxN],b[MaxN];

int main(){
	int n,q;
	cin >> n >> q;
	for (int i=0;i<q;++i)
		cin >> b[i];
	fill(ans,ans+n,-1);
	for (int i=0;i<q;++i)
		for (int j=b[i]-1;j<n;++j)
			if (ans[j]==-1)
				ans[j]=b[i];
	for (int i=0;i<n;++i)
		cout << ans[i] << " ";
}