#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E5+10;
int h[MaxN];

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	for(int i=0;i<n;++i)
		cin >> h[i];
	sort(h,h+n);
	int ans=h[b]-h[b-1];
	cout << ans;
}