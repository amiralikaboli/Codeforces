#include <iostream>

using namespace std;

int t[10];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
	}
	if (t[0]!=0){
		if (t[5]<9){
			cout << "0";
			return 0;
		}
		for (int i=1;i<=t[5]/9;++i)
			cout << "555555555";
		for (int i=0;i<t[0];++i)
			cout << "0";
	}
	else
		cout << -1;
}