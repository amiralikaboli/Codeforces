#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,b,p;
	cin >> n >> b >> p;
	int ans1=0,ans2=n*p;
	while (n>1){
		int t=log2(n);
		t=(1<<t);
		ans1+=t*b+t/2;
		n-=t/2;
	}
	cout << ans1 << " " << ans2;
}