#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int h[MaxN];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> h[i];
	int ans=n+n-1;
	ans+=h[0];
	for (int i=1;i<n;++i)
		ans+=ghadr(h[i]-h[i-1]);
	cout << ans;
}