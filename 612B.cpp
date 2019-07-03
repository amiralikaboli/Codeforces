#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		--x;
		a[x]=i;
	}
	long long ans=0;
	for (int i=1;i<n;++i)
		ans+=abs(a[i]-a[i-1]);
	cout << ans;
}