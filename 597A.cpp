#include <bits/stdc++.h>

using namespace std;

int main(){
	long long k,a,b;
	cin >> k >> a >> b;
	if (b>0 && b%k!=0)
		b=b/k*k;
	else if (b<0 && b%k!=0)
		b=(b/k-1)*k;
	cerr << a << " " << b << endl;
	cout << (b-a+k)/k;
}