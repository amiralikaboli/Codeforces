#include <bits/stdc++.h>

using namespace std;

const long long MaxN=5E5+10;
long long a[MaxN];
long long dp_s[MaxN],dp_e[MaxN];
long long t[MaxN];

int main(){
	long long n;
	cin >> n;
	long long sum=0;
	for (long long i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	if (sum%3!=0){
		cout << 0;
		return 0;
	}
	sum/=3;
	dp_s[0]=a[0];
	for (long long i=1;i<n;++i)
		dp_s[i]=dp_s[i-1]+a[i];
	dp_e[n-1]=a[n-1];
	for (long long i=n-2;i>=0;--i)
		dp_e[i]=dp_e[i+1]+a[i];
	for (long long i=1;i<=n;++i)
		t[i]=t[i-1]+(dp_s[i-1]==sum);
	long long ans=0;
	for (long long i=2;i<n;++i)
		if (dp_e[i]==sum)
			ans+=t[i-1];
	cout << ans;
}