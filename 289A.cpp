#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int t=0;
	for (int i=0;i<n;++i){
		int l,r;
		cin >> l >> r;
		t+=r-l+1;
	}
	cout << (k-t%k)%k;
}