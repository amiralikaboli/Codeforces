#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	for (int i=1;i<=n/2+1;++i){
		for (int j=0;j<(n/2-i)+1;++j)
			cout << "*";
		for (int j=0;j<2*i-1;++j)
			cout << "D";
		for (int j=0;j<(n/2-i)+1;++j)
			cout << "*";
		cout << endl;
	}
	for (int i=n/2;i>0;--i){
		for (int j=0;j<(n/2-i)+1;++j)
			cout << "*";
		for (int j=0;j<2*i-1;++j)
			cout << "D";
		for (int j=0;j<(n/2-i)+1;++j)
			cout << "*";
		cout << endl;
	}
}