#include <iostream>

using namespace std;

const int INF=1E9+7;

int main(){
	int n,k;
	cin >> k >> n;
	if (k>n){
		cout << k-n;
		return 0;
	}
	int ans=0;
	while (n>k){
		if (n%2==0){
			n/=2;
			++ans;
		}
		else{
			++n;
			n/=2;
			ans+=2;
		}
	}
	ans+=k-n;
	cout << ans;
}