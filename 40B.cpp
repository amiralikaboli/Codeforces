#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x;
	cin >> n >> m >> x;
	--x;
	if (n>m)
		swap(n,m);
	for (int i=0;i<x && n>0;++i){
		n-=2;
		m-=2;
	}
	if (n<=0)
		cout << 0;
	else if (n==1)
		cout << (m+1)/2;
	else
		cout << n+m-2;
}