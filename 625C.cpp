#include <bits/stdc++.h>

using namespace std;

const int MaxN=500+10;
int a[MaxN][MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	int cnt=1;
	for (int i=1;i<=n;++i)
		for (int j=1;j<=k-1;++j)
			a[i][j]=cnt++;
	int ans=0;
	for (int i=1;i<=n;++i)
		for (int j=k;j<=n;++j){
			a[i][j]=cnt++;
			if (j==k)
				ans+=a[i][j];
		}
	cout << ans << endl;
	for (int i=1;i<=n;++i){
		for (int j=1;j<=n;++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}