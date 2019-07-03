#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxK=1E5+10;
int d[MaxK],h[MaxK];

int ghadr(int x){
	return max(x,-x);
}

int32_t main(){
	int n,k;
	cin >> n >> k;
	cin >> d[0] >> h[0];
	int ans=d[0]+h[0]-1;
	for (int i=1;i<k;++i){
		cin >> d[i] >> h[i];
		if (ghadr(d[i]-d[i-1])<ghadr(h[i]-h[i-1])){
			cout << "IMPOSSIBLE";
			return 0;
		}
		ans=max(ans,h[i]);
		ans=max(ans,(d[i]-d[i-1]+h[i]+h[i-1])/2);
	}
	ans=max(ans,n-d[k-1]+h[k-1]);
	cout << ans;
}