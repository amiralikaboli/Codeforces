#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN];

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		ans+=a[i];
	}
	sort(a,a+n);
	for (int i=0;i<n;++i)
		if (ans%2 && a[i]%2){
			ans-=a[i];
			break;
		}
	cout << ans;
}