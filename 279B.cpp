#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n,t;
	cin >> n >> t;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ind_s=0,ind_e=0,sum=0;
	int ans=0;
	for (int i=0;i<n;++i){
		++ind_e;
		sum+=a[i];
		while(sum>t){
			sum-=a[ind_s];
			++ind_s;
		}
		ans=max(ans,ind_e-ind_s);
	}
	cout << ans;
}
