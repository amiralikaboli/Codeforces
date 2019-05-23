#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,t;
	cin >> n >> k >> t;
	int cnt=t*n*k/100;
	for (int i=0;i<n;++i){
		cout << min(cnt,k) << " ";
		cnt-=min(cnt,k);
	}
}