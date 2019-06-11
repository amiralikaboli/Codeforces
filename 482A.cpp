#include <iostream>

using namespace std;

int main (){
	int n,k;
	cin >> n >> k;
	if (k%2)
		for (int i=1;i<=(k+1)/2;++i)
			cout << i << " " << (k+2-i) << " ";
	else{
		for (int i=1;i<=k/2;++i)
			cout << i << " " << (k+2-i) << " ";
		cout << k/2+1 << " ";
	}
	for (int i=k+2;i<=n;++i)
		cout << i << " ";
}