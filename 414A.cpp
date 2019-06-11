#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	if (k<n/2){
		cout << -1;
		return 0;
	}
	if (n==1){
		if (k==0)
			cout << 1;
		else
			cout << -1;
		return 0;
	}
	cout << k-n/2+1 << " " << 2*(k-n/2+1) << " ";
	int x=2*(k-n/2+1)+1;
	for (int i=0;i<n-2;++i)
		cout << x+i << " ";
}