#include <bits/stdc++.h>

using namespace std;

long long t[20];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x];
	}
	long long ans=0;
	for (int i=1;i<=m;++i)
		for (int j=i+1;j<=m;++j)
			ans+=t[i]*t[j];
	cout << ans;
}