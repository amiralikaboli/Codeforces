#include <bits/stdc++.h>

using namespace std;

const int MaxN=5E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	int ind=0;
	int ans=n;
	for(int i=(n+1)/2;i<n && ind<(n+1)/2;++i)
		if(2*a[ind]<=a[i]){
			--ans;
			++ind;
		}
	cout << ans;
}