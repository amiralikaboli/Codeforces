#include <iostream>

using namespace std;

int n,k,ans=0;
int a[111];

bool lucky_check(int n){
	int x=n;
	int t=0;
	while (x!=0){
		if (x%10==4 || x%10==7)
			++t;
		x/=10;
	}
	if (t<=k)
		return true;
	return false;
}

int main (){
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> a[i];
		ans+=lucky_check(a[i]);
	}
	cout << ans;
}