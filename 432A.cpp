#include <iostream>
using namespace std;
int y[2222];
int main (){
	int n,k,cnt=0;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> y[i];
		if (y[i]<=5-k)
			++cnt;
	}
	cout << cnt/3;
}
