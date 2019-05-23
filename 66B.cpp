#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];
int s[MaxN],e[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i)
		cin >> a[i];
	for (int i=1;i<=n;++i){
		s[i]=1;
		if (a[i]>=a[i-1])
			s[i]+=s[i-1];
	}
	for (int i=n;i>=0;--i){
		e[i]=1;
		if (a[i]>=a[i+1])
			e[i]+=e[i+1];
	}
	int ans=0;
	for (int i=1;i<=n;++i)
		ans=max(ans,s[i]+e[i]-1);
	cout << ans;
}