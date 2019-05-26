#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	if (k>n){
		cout << -1;
		return 0;
	}
	sort(a,a+n);
	if (k==0){
		cout << "0 " << a[n-1]+1;
		return 0;
	}
	int t=n-k;
	cout << "0 " << a[t];
}