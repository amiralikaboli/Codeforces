#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];
set <int> st;

int main(){
	int n;
	cin >> n;
	int mx=0;
	int g=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		mx=max(mx,a[i]);
		g=__gcd(g,a[i]);
	}
	int ans=mx/g-n;
	cout << (ans%2 ? "Alice" : "Bob");
}