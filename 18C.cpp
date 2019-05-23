#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int s_f[MaxN],s_e[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	s_f[0]=a[0];
	for (int i=1;i<n;++i)
		s_f[i]=s_f[i-1]+a[i];
	s_e[n-1]=a[n-1];
	for (int i=n-2;i>=0;--i)
		s_e[i]=s_e[i+1]+a[i];
	int ans=0;
	for (int i=0;i<n-1;++i)
		if (s_f[i]==s_e[i+1])
			++ans;
	cout << ans;
}