#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	a[n-1]=(a[n-1]==1 ? 2 : 1);
	sort(a,a+n);
	for (int i=0;i<n;++i)
		cout << a[i] << " ";
}