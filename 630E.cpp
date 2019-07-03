#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int dx=x2-x1+1;
	int dy=y2-y1+1;
	int ans=dx*(dy/2)+(dx+1)/2;
	cout << ans;
}