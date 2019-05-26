#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a=0;
	int b=0;
	for (int i=0;i<n;++i){
		int kind,succes,lost;
		cin >> kind >> succes >> lost;
		(kind==1 ? a+=succes-lost : b+=succes-lost);
	}
	cout << (a>=0 ? "LIVE" : "DEAD") << endl << (b>=0 ? "LIVE" : "DEAD");
}