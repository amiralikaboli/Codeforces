#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long ans=n;
	for (int i=2;i*i<=n;++i)
		while (n%i==0){
			ans+=n/i;
			n/=i;
		}
	cout << ans+(n>1);
}