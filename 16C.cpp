#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,x,y;
	cin >> a >> b >> x >> y;
	int gcd=__gcd(x,y);
	x/=gcd;
	y/=gcd;
	int kasr=min(a/x,b/y);
	cout << x*kasr << " " << y*kasr;
}