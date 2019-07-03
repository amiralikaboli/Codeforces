#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i=0;i<t;++i){
		long long n;
		cin >> n;
		long long ans=n*(n+1)/2;
		int ind=0;
		while ((1<<ind)<=n){
			ans-=2*(1<<ind);
			++ind;
		}
		cout << ans << endl;
	}
	return 0;
}