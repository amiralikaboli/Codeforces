#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int n;
	cin >> n;
	if (n>=0)
		cout << n;
	else{
		int x=n/10;
		if (n/100!=0)
			cout << n/100;
		if (n/100==0)
			cout << max(x%10,n%10);
		else
			cout << -max(x%10,n%10);
	}
}