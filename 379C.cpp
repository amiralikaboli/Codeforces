#include <bits/stdc++.h>

using namespace std;

const int MaxN=3E5+10;
pair <int,int> p[MaxN];
int ans[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i;
	}
	sort(p,p+n);
	ans[p[0].second]=p[0].first;
	for (int i=1;i<n;++i){
		int x=max(ans[p[i-1].second]+1,p[i].first);
		ans[p[i].second]=x;
	}
	for (int i=0;i<n;++i)
		cout << ans[i] << " ";
}