#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
pair <int,int> p[MaxN];
int ans[MaxN];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i;
	}
	sort(p,p+n);
	for (int i=0;i<n;++i)
		ans[p[i].second]=i%2;
	for (int i=0;i<n;++i)
		cout << ans[i] << " ";
}