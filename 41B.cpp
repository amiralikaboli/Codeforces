#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ans=k;
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			ans=max(ans,k+(k/a[i])*(a[j]-a[i]));
	cout << ans;
}