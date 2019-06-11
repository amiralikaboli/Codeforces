#include <bits/stdc++.h>

using namespace std;

const long long MaxN=1E5+10;
long long c[MaxN];

int main(){
	long long n,x;
	cin >> n >> x;
	for(long long i=0;i<n;++i)
		cin >> c[i];
	sort(c,c+n);
	long long ans=0;
	for(long long i=0;i<n;i++){
		ans+=x*c[i];
		if(x>1)
			--x;
	}
	cout << ans;
}