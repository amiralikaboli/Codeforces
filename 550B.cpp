#include <bits/stdc++.h>

using namespace std;

const int MaxN=15+5;
int a[MaxN];

int main(){
	int n,l,r,x;
	cin >> n >> l >> r >> x;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int ans=0;
	for (int t=0;t<(1<<n);++t){
		int cnt=0;
		int mx=0,mn=1E9;
		int h=0;
		for (int i=0;i<n;++i){
			if ((t&(1<<i))){
				cnt+=a[i];
				++h;
				mx=max(mx,a[i]);
				mn=min(mn,a[i]);
			}
		}
		if (cnt<=r && cnt>=l && mx-mn>=x && h!=1){
			++ans;
			//cerr << t << " ";
		}
	}
	//cerr << endl;
	cout << ans;
}