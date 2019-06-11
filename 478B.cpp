#include <iostream>

using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	long long x=n%k;
	long long saghf=(n+k-1)/k;
	long long kaf=n/k;
	cout << x*saghf*(saghf-1)/2+(k-x)*kaf*(kaf-1)/2 << " " << (n-k+1)*(n-k)/2;
}