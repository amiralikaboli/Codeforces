#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int a[MaxN];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	long long sum=0;
	long long ans=0;
	for (int i=0;i<n;++i)
		if (a[i]!=sum){
			ans+=ghadr(a[i]-sum);
			sum=a[i];
		}
	cout << ans;
}