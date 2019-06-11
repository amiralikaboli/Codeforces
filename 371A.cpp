#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];
int cnt[MaxN][2];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i]; 
	int t=n/k;
	for (int i=0;i<n;++i)
		++cnt[i%k][a[i]];
	int ans=0;
	for (int i=0;i<k;++i)
		ans+=min(cnt[i][1],cnt[i][2]);
	cout << ans;
}