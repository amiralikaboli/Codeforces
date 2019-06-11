#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	long long ans=0;
	for (int i=0;i<k;++i){
		int x,y;
		cin >> x >> y;
		--x;
		--y;
		ans+=min(a[x],a[y]);
	}
	cout << ans;
}