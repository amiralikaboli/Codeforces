#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ans=0;
	for (int i=1;i<=n;++i)
		for (int j=i;j<=n;++j){
			int x=i*i+j*j;
			if (x>n*n || sqrt(x)!=(int)sqrt(x))
				continue;
			++ans;
		}
	cout << ans;
}