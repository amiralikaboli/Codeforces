#include <iostream>
#include <cmath>

using namespace std;

long long d[15]={0,0,9,108,1107,11106,111105,1111104,11111103,111111102,1111111101};

int main (){
	long long n;
	long long x;
	cin >> n;
	x=n*(floor(log10(n))+1)-d[int(floor(log10(n))+1)];
	cout << x;
}