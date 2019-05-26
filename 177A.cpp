#include <bits/stdc++.h>

using namespace std;

const int MaxN=200+10;
int a[MaxN][MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			cin >> a[i][j];
	int ans=0;
	for (int i=0;i<n;++i){
		ans+=a[i][i];
		ans+=a[i][n-i-1];
		ans+=a[i][n/2];
		ans+=a[n/2][i];
	}
	ans-=3*a[n/2][n/2];
	cout << ans;
}