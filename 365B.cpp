#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int mx=min(2,n);
	int l=-1;
	for (int i=2;i<n;++i){
		if (a[i]==a[i-1]+a[i-2])
			l=max(3,l+1);
		else
			l=-1;
		mx=max(mx,l);
	}
	cout << mx;
}