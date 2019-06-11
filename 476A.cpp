#include <iostream>

using namespace std;

int main (){
	int n,k;
	cin >> n >> k;
	if (n<k){
		cout << -1;
		return 0;
	}
	int one=n%2;
	int two=n/2;
	while ((one+two)%k){
		--two;
		one+=2;
	}
	cout << one+two;
}