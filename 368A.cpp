#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n,d,k;
	cin >> k >> d;
	for (int i=0;i<k;++i)
		cin >> a[i];
	cin >> n;
	int ans=0;
	if (n>k)
		ans=-(n-k)*d;
	sort(a,a+k);
	for (int i=0;i<min(n,k);++i)
		ans+=a[i];
	cout << ans;
}