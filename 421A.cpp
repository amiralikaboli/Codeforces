#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int ans[MaxN];

int main(){
	fill(ans,ans+MaxN,2);
	int n,a,b;
	cin >> n >> a >> b;
	for (int i=0;i<a;++i){
		int x;
		cin >> x;
		ans[x]=1;
	}
	for (int i=1;i<=n;++i)
		cout << ans[i] << " ";
	return 0;
}