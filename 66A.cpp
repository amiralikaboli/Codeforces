#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n;
	cin >> n;
	if (n<=127)
		cout << "byte";
	else if (n<=32767)
		cout << "short";
	else if (n<=2147483647)
		cout << "int";
	else if (n<=9223372036854775807)
		cout << "long";
	else
		cout << "BigInteger";
}