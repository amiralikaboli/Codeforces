#include <bits/stdc++.h>

using namespace std;

int main(){
	long double a,b;
	cin >> a >> b;
	if (a<b){
		cout << -1;
		return 0;
	}
	if (a==b){
		cout << a;
		return 0;
	}
	long double x1=a-b;
	long double x2=a+b;
	int k1=floor(x1/(2*b));
	int k2=floor(x2/(2*b));
	long double ans=min(x1/(2*k1),x2/(2*k2));
	cout << setprecision(15) << ans;
}