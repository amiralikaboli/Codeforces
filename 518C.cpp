#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int ind[MaxN],cnt[MaxN];

int32_t main(){
	int n,q,k;
	cin >> n >> q >> k;
	for (int i=0;i<n;++i){
		cin >> ind[i];
		--ind[i];
		cnt[ind[i]]=i;
	}
	int ans=0;
	for (int i=0;i<q;++i){
		int x;
		cin >> x;
		--x;
		ans+=cnt[x]/k+1;
		if (cnt[x]!=0){
			int y=ind[cnt[x]-1];
			swap(ind[cnt[x]],ind[cnt[x]-1]);
			swap(cnt[x],cnt[y]);
		}
	}
	cout << ans;
}