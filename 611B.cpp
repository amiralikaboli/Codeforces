#include <bits/stdc++.h>

using namespace std;

#define int long long

int len(int n){
	int x=n;
	int t=0;
	while (x){
		++t;
		x/=2;
	}
	return t;
}

int find(int n){
	int x=len(n);
	--x;
	int ans=x*(x-1)/2;
	for (int i=x-1;i>=0;--i)
		if ((n&(1ll<<i)))
			++ans;
		else
			break;
	return ans;
}

int32_t main(){
	int a,b;
	cin >> a >> b;
	cout << find(b+1)-find(a);
}
//:-P