#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=2E5+10;
pii p[MaxN];
int ans[MaxN];

int sgn(int x){
	return (x>=0 ? 1 : -1);
}

int main(){
	fill(ans,ans+MaxN,2);
	int n,a,b;
	cin >> n >> a >> b;
	for(int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].first*=sgn(a-b);
		p[i].second=i;
	}
	if (a!=b)
		sort(p,p+n);
	for(int i=0;i<a;++i)
		--ans[p[i].second];
	for(int i=0;i<n;++i)
		cout << ans[i] << " ";
}