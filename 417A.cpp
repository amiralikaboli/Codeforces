#include <bits/stdc++.h>

using namespace std;

const int MAX=100+10;
const int INF=1E9+7;

int main(){
	int c,d;
	int n,m;
	int k;
	cin >> c >> d;
	cin >> n >> m;
	cin >> k;
	int ans=INF;
	for (int i=0;i<MAX*MAX;++i)
		for (int j=0;j<MAX*MAX;++j)
			if (n*i+j+k>=n*m)
				ans=min(ans,i*c+j*d);
	cout << ans;
}