#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	int ans=0;
	for(int i=0;i<n;++i)
		if(ans*a[i]+ans<=i)
			++ans;
	cout << ans;
	return 0;
}