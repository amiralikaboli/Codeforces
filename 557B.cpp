#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[2*MaxN];

int main(){
	int n,w;
	cin >> n >> w;
	for (int i=0;i<2*n;++i)
		cin >> a[i];
	sort(a,a+2*n);
	long double ans=w/(3.0*n);
	ans=min(ans,(long double)a[0]);
	ans = min(ans,(long double)a[n]*0.5);
	cout << setprecision(9) << 3.0*ans*n;
}