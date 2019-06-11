#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

map <int,pii> mp;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	int ind=0;
	for (int i=0;i<n;++i)
		if (i%2==0)
			for (int j=0;j<m;++j)
				mp[ind++]=pii(i+1,j+1);
		else
			for (int j=m-1;j>=0;--j)
				mp[ind++]=pii(i+1,j+1);
	int t=(m*n)%k;
	int cnt=(m*n)/k;
	for (int i=0;i<(k-t)*cnt;++i){
		if (i%cnt==0)
			cout << endl << cnt << " ";
		cout << mp[i].first << " " << mp[i].second << " ";
	}
	for (int i=(k-t)*cnt;i<m*n;++i){
		if (i%(cnt+1)==((k-t)*cnt)%(cnt+1))
			cout << endl << cnt+1 << " ";
		cout << mp[i].first << " " << mp[i].second << " ";
	}
}