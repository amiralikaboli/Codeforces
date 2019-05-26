#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cnt_l=0,cnt_r=0;
	for (int i=0;i<n;++i){
		int l,r;
		cin >> l >> r;
		cnt_l+=l;
		cnt_r+=r;
	}
	cout << min(cnt_l,n-cnt_l)+min(cnt_r,n-cnt_r);
}