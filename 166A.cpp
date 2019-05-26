#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

const int MaxN=50+10;
pii p[MaxN];

bool cmp(pii a,pii b){
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}

int main(){
	int n,k;
	cin >> n >> k;
	--k;
	for (int i=0;i<n;++i)
		cin >> p[i].first >> p[i].second;
	sort(p,p+n,cmp);
	int ans=1;
	int ind=k-1;
	while (p[k].first==p[ind].first && p[k].second==p[ind].second && ind>=0){
		++ans;
		--ind;
	}
	ind=k+1;
	while (p[k].first==p[ind].first && p[k].second==p[ind].second && ind<n){
		++ans;
		++ind;
	}
	cout << ans;
}