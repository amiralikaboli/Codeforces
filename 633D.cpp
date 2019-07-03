#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];
map <int,int> mp;

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		++mp[a[i]];
	}
	int ans=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			if (i==j)
				continue;
			if (a[i]==0 && a[j]==0){
				ans=max(ans,mp[0]);
				continue;
			}
			int f0=a[i],f1=a[j];
			--mp[f0];
			--mp[f1];
			int f2=f0+f1;
			int len=2;
			while (mp[f2]){
				--mp[f2];
				f0=f1;
				f1=f2;
				f2=f0+f1;
				++len;
			}
			ans=max(ans,len);
			f0=a[i];
			f1=a[j];
			f2=f0+f1;
			++mp[f0];
			++mp[f1];
			for(int i=0;i<len-2;++i){
				++mp[f2];
				f0=f1;
				f1=f2;
				f2=f0+f1;
			}
		}
	cout << ans;
}