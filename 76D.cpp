#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long

int32_t main(){
	int xr,sum;
	cin >> sum >> xr;
	int d=sum-xr;
	if (sum<xr || d%2){
		cout << -1;
		return 0;
	}
	d/=2;
	int a=d;
	int b=d+xr;
	cout << a << " " << b;
}