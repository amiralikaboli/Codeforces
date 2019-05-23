#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN];

int32_t main(){
	int n;
	cin >> n;
	int cnt=1;
	int ans=1;
	cin >> a[0];
	for (int i=1;i<n;++i){
		cin >> a[i];
		if (a[i]==a[i-1])
			++cnt;
		else
			cnt=1;
		ans+=cnt;
	}
	cout << ans;
}