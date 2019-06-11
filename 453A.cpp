#include <bits/stdc++.h>

using namespace std;

#define int double

int32_t main(){
	int m,n;
	cin >> m >> n;
	int ans=0;
	int cnt=0;
	for (int i=1;i<=m;++i){
		ans+=(pow(i/m,n)-cnt)*i;
		cnt=pow(i/m,n);
	}
	cout << setprecision(12) << ans;
}