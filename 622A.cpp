#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int x=sqrt(2*n);
	if (x*(x+1)/2>n)
		--x;
	if (n==x*(x+1)/2)
		cout << x;
	else
		cout << n-(x*(x+1)/2);
}