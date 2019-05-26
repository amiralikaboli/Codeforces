#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxN=1E3+10;
pii p[MaxN];

bool cmp(pii a,pii b){
	if (a.second==b.second)
		return a.first<b.first;
	return a.second<b.second;
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> p[i].first >> p[i].second;
	sort(p,p+n,cmp);
	int ans=0;
	int cnt=0,ind=n-1;
	while (cnt>=0 && ind>=0){
		ans+=p[ind].first;
		cnt+=p[ind].second;
		--cnt;
		--ind;
	}
	cout << ans;
}