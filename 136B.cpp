#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int a,c;
	cin >> a >> c;
	int b=0;
	int tav=1;
	while (a || c){
		int dig=c%3-a%3+3;
		a/=3;
		c/=3;
		dig%=3;
		b+=dig*tav;
		tav*=3;
	}
	cout << b;
}