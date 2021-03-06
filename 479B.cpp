#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

const int MaxN=100+10;
pii p[MaxN];
vector <pii> ans;

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i+1;
	}
	sort(p,p+n);
	while (p[n-1].first-p[0].first>1 && k){
		--k;
		++p[0].first;
		--p[n-1].first;
		ans.push_back(pii(p[n-1].second,p[0].second));
		sort(p,p+n);
	}
	cout << p[n-1].first-p[0].first << " " << ans.size() << endl;
	for (int i=0;i<ans.size();++i)
		cout << ans[i].first << " " << ans[i].second << endl;
}