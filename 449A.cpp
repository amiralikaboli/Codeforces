#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n, m, k;
	cin >> n >> m >> k;
	if (n>m)
		swap(n,m);
	++k;
	if(k-1>n+m-2)
		cout << -1;
	else if(m%k==0 || n%k==0)
		cout << n*m/k;
	else if(k<m)
		cout << max((n/k)*m,(m/k)*n);
	else
		cout << max(n/(k-m+1),m/(k-n+1));
}