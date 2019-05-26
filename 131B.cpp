#include <bits/stdc++.h>

using namespace std;

#define int long long

int t[50];

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		++t[x+10];
	}
	int ans=t[10]*(t[10]-1)/2;
	for (int i=0;i<10;++i)
		ans+=t[i]*t[20-i];
	cout << ans;
}