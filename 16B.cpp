#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxM=20+10;
pii p[MaxM];

bool cmp(pii a,pii b){
	return a.second>b.second;
}

int main(){
	int n,k;
	cin >> k >> n;
	for (int i=0;i<n;++i)
		cin >> p[i].first >> p[i].second;
	sort(p,p+n,cmp);
	int ans=0;
	for (int i=0;i<n;++i){
		ans+=p[i].second*min(p[i].first,k);
		k-=min(p[i].first,k);
	}
	cout << ans;
}