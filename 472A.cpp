#include <iostream>

using namespace std;

bool prime(int n){
	if (n==1)
		return false;
	for (int i=2;i*i<=n;++i)
		if (n%i==0)
			return false;
	return true;
}

int main (){
	int n;
	cin >> n;
	for (int i=n/2;i>=0;--i)
		if (prime(i)==false && prime(n-i)==false){
			cout << i << " " << n-i;
			return 0;
		}
}