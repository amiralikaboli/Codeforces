#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,l,r,sk,sall;
	cin >> n >> k >> l >> r >> sall >> sk;
	int m=n-k;
	int sb=sall-sk;
	int t=sk%k;
	for (int i=0;i<k;++i){
		cout << sk/k+(t>0) << " ";
		--t; 
	}
	if (m!=0){
		t=sb%m;
		for (int i=0;i<m;++i){
			cout << sb/m+(t>0) << " ";
			--t;
		}
	}
}