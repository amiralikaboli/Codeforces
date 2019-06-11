#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,q;
	cin >> n >> q;
	int one=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		one+=(x==1);
	}
	for (int i=0;i<q;++i){
		int l,r;
		cin >> l >> r;
		if (r-l+1<=min(one,n-one)*2 && (r-l+1)%2==0)
			cout << "1\n";
		else
			cout << "0\n";
	}
}