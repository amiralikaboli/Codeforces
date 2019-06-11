#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E3+10;
int a[MaxN],b[MaxN];

int main(){
	int m,n;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<m;++i)
		cin >> b[i];
	int ind=0;
	int ans=n;
	for (int i=0;i<m && ind<n;++i)
		if (b[i]>=a[ind]){
			++ind;
			--ans;
		}
	cout << ans;
}