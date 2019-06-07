#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MaxN=1E5+10;
int a[MaxN];
int t[50];

int C(int n){
	return n*(n-1)/2;
}

int find(int n){
	int x=n;
	int t=0;
	while (x!=0){
		t+=x%2;
		x/=2;
	}
	return t;
}

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i)
		++t[find(a[i])];
	int ans=0;
	for (int i=0;i<50;++i)
		ans+=C(t[i]);
	cout << ans;
}