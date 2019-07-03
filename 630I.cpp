#include <iostream>

using namespace std;

#define int long long

int32_t main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=0;i<n-1;++i){
		int cnt=(1LL<<(2*n-2));
		if (i!=0){
			cnt*=3;
			cnt/=4;
		}
		if (i!=n-2){
			cnt*=3;
			cnt/=4;
		}
		ans+=cnt;
	}
	cout << ans;
}