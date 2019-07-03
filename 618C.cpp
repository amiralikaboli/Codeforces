#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int,int>

const int MaxN=1E5+10;
pii p[MaxN];
map <pii,int> mp;

int32_t main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> p[i].first >> p[i].second;
		mp[p[i]]=i+1;
	}
	sort(p,p+n);
	int ind=2;
	while ((p[0].second-p[1].second)*(p[0].first-p[ind].first)==(p[0].first-p[1].first)*(p[0].second-p[ind].second))
		++ind;
	cout << mp[p[0]] << " " << mp[p[1]] << " " << mp[p[ind]];
}