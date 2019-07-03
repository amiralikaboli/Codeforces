#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int dp_more[MaxN],dp_less[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	fill(dp_less,dp_less+n,1);
	fill(dp_more,dp_more+n,1);
	for (int i=1;i<n;++i)
		if (a[i]==a[i-1]){
			dp_more[i]=dp_more[i-1]+1;
			dp_less[i]=dp_less[i-1]+1;
		}
		else if (a[i]==a[i-1]+1)
			dp_less[i]=dp_more[i-1]+1;
		else if (a[i]==a[i-1]-1)
			dp_more[i]=dp_less[i-1]+1;
	int mx_more=*max_element(dp_more,dp_more+n);
	int mx_less=*max_element(dp_less,dp_less+n);
	cout << max(mx_less,mx_more);
}