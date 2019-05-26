#include <bits/stdc++.h>

using namespace std;

#define int long long

int sgn(int n){
	return (n>=0 ? 1 : -1);
}

int32_t main(){
	int n,x,y;
	cin >> n >> x >> y;
	if (n>y){
		cout << -1;
		return 0;
	}
	int ans=n-1+(y-n+1)*(y-n+1);
	if (ans<x){
		cout << -1;
		return 0;
	}
	for (int i=0;i<n-1;++i)
		cout << "1 ";
	cout << (y-n+1);
}