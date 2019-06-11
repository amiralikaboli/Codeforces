#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
const int INF=1E9+7;
int x[MaxN],y[MaxN];

int32_t main(){
	int n;
	cin >> n;
	int mx_x=-INF,mx_y=-INF;
	int mn_x=INF,mn_y=INF;
	for (int i=0;i<n;++i){
		cin >> x[i] >> y[i];
		mx_x=max(mx_x,x[i]);
		mn_x=min(mn_x,x[i]);
		mx_y=max(mx_y,y[i]);
		mn_y=min(mn_y,y[i]);
	}
	int t=max(mx_x-mn_x,mx_y-mn_y);
	cout << t*t;
}