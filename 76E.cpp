#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	int sumx=0,sumy=0;
	for (int i=0;i<n;++i){
		int x,y;
		cin >> x >> y;
		ans+=n*x*x;
		ans+=n*y*y;
		sumx+=x;
		sumy+=y;
	}
	ans-=sumx*sumx+sumy*sumy;
	cout << ans;
}