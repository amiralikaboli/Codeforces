#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
int a[MaxN];

int main(){
	int n,d;
	cin >> n >> d;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ans=0;
	for (int i=1;i<n;++i)
		if (a[i]<=a[i-1]){
			int dif=a[i-1]-a[i];
			ans+=dif/d+1;
			a[i]+=(dif/d+1)*d;
		}
	cout << ans;
}