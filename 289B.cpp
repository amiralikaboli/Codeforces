#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
const int MaxM=100+10;
const int INF=1E9+7;
int a[MaxN][MaxM],cnt[MaxN][MaxM];

int ghadr(int x){
	return max(x,-x);
}

int32_t main(){
	int n,m,d;
	scanf("%d %d %d",&n,&m,&d);
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			scanf("%d",&a[i][j]);
	for (int i=0;i<m*n;++i)
		for (int j=i+1;j<m*n;++j){
			if (ghadr(a[i/m][i%m]-a[j/m][j%m])%d){
				cout << -1;
				return 0;
			}
			cnt[i/m][i%m]+=ghadr(a[i/m][i%m]-a[j/m][j%m])/d;
			cnt[j/m][j%m]+=ghadr(a[i/m][i%m]-a[j/m][j%m])/d;
		}
	int ans=INF;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			ans=min(ans,cnt[i][j]);
	printf("%d",ans);
}