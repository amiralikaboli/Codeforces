#include <iostream>

using namespace std;

int main(){
	long long n;
	cin >> n;
	for (long long i=2;i*i<=n;++i)
		if (n%(i*i)==0){
			n/=i;
			i=1;
		}
	cout << n;
}