#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,k,n;
	cin >> x >> k >> n;
	int t=(k-x%k)%k;
	int ans=0;
	for (int i=0;i<(n-x)/k;++i)
		if (k*i+t>0){
			++ans;
			cout << k*i+t << " ";
		}
	if ((n-x)/k*k+t<=n-x && (n-x)/k*k+t>0){
		cout << (n-x)/k*k+t;
		++ans;
	}
	if (ans==0)
		cout << -1;
}