#include <bits/stdc++.h>

using namespace std;

int main(){
	double a,b,c,d;
	cin >> a >> b >> c >> d;
	double a1=a/b;
	double q=(1-a/b)*(1-c/d);
	cout << setprecision(6) << a1/(1-q);
}