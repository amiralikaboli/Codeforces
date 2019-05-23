#include <bits/stdc++.h>

using namespace std;

const int MOD=1000*1000+3;

int main(){
	int n;
	cin >> n;
	int ans=1;
	for (int i=2;i<=n;++i){
		ans*=3;
		ans%=MOD;
	}
	cout << ans;
}