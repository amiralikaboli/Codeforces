#include  <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	for (int i=0;i<=n;++i){
		for (int j=1;j<=2*(n-i);++j)
			cout << " ";
		if (i==0){
			cout << 0 << endl;
			continue;
		}
		for (int j=0;j<=i;++j)
			cout << j << " ";
		for (int j=i-1;j>0;--j)
			cout << j << " ";
		if (i!=0)
			cout << 0;
		cout << endl;
	}
	for (int i=n-1;i>=0;--i){
		for (int j=1;j<=2*(n-i);++j)
			cout << " ";
		if (i==0){
			cout << 0 << endl;
			continue;
		}
		for (int j=0;j<=i;++j)
			cout << j << " ";
		for (int j=i-1;j>0;--j)
			cout << j << " ";
		if (i!=0)
			cout << 0;
		cout << endl;
	}
}