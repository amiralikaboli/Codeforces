#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
const int MaxAi=2E4+10;
int a[MaxN];
int m[MaxN];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	int sum=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];

	}
	for (int i=0;i<n;++i)
		m[i]=sum/n+(i<sum%n);
	sort(a,a+n);
	sort(m,m+n);
	int ans=0;
	for (int i=0;i<n;++i)
		ans+=ghadr(m[i]-a[i]);
	ans/=2;
	cout << ans;
}