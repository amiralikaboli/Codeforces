#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	for (int i=0;i<n;++i)
		if (a[i]<0 && k){
			--k;
			a[i]=-a[i];
		}
	sort(a,a+n);
	if (k%2)
		a[0]=-a[0];
	int sum=0;
	for (int i=0;i<n;++i)
		sum+=a[i];
	cout << sum;
}