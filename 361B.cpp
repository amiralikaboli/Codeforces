#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	if (n==k){
		cout << -1;
		return 0; 
	}
	k=n-k;
	cout << k << " ";
	for (int i=1;i<k;++i)
		cout << i << " ";
	for (int i=k;i<n;++i)
		cout << i+1 << " ";
}