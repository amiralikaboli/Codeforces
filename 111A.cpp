#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long long n,x,y;
	cin >> n >> x >> y;
	if (n>y || (y-n+1)*(y-n+1)+n-1<x){
		cout << -1;
		return 0;
	}
	cout << (y-n+1) << " ";
	for (long long i=0;i<n-1;++i)
		cout << 1 << " ";
}