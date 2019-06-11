#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN],b[MaxN];
bool mark[MaxN];

int main(){
	int n;
	cin >> n;
	int ans=n;
	for (int i=0;i<n;++i)
		cin >> a[i] >> b[i];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			if (i!=j && a[i]==b[j])
				mark[i]=true;
	for (int i=0;i<n;++i)
		ans-=mark[i];
	cout << ans;
}