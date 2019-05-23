#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
const int MaxAi=1E3+10;
int a[MaxN];
int mark[MaxAi*2];

int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;++i){
		cin >> a[i];
		mark[a[i]]=i;
	}
	for (int i=1;i<=n;++i)
		for (int j=1;j<=n;++j)
			if (i!=j && mark[a[i]+a[j]]!=0){
				cout << mark[a[i]+a[j]] << " " << i << " " << j;
				return 0;
			}
	cout << -1;
}