#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	if (n<3){
		cout << 1 << endl << 1;
		return 0;
	}
	if (n==3){
		cout << 2 << endl << "1 3";
		return 0;
	}
	if (n==4){
		cout << 4 << endl << "3 1 4 2";
		return 0;
	}
	cout << n << endl;
	for (int i=1;i<=(n+1)/2;++i)
		cout << 2*i-1 << " ";
	for (int i=1;i<=n/2;++i)
		cout << 2*i << " ";
}