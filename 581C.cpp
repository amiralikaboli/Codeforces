#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

const int MaxN=1E5+10;
pii p[MaxN];

bool cmp(pii a,pii b){
	if (a.second==b.second)
		return a.first<b.first;
	return a.second<b.second;
}

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		if (p[i].first%10)
			p[i].second=10-(p[i].first%10);
	}
	sort(p,p+n,cmp);
	int ans=0;
	for (int i=0;i<n;++i){
		p[i].first+=min(k,p[i].second);
		ans+=p[i].first/10;
		k-=min(k,p[i].second);
	}
	for (int i=0;i<n;++i){
		ans+=min(100-p[i].first,k)/10;
		k-=min(100-p[i].first,k);
	}
	cout << ans;
}