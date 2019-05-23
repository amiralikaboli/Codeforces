#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int t[MaxN];
int ans[MaxN];
pair <int,int> p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i;
		++t[p[i].first];
	}
	for (int i=2;i<MaxN;++i)
		if (t[i]>t[i-1]){
			cout << -1;
			return 0;
		}
	sort(p,p+n);
	int cnt=1;
	ans[p[0].second]=cnt++;
	for (int i=1;i<n;++i){
		if (p[i].first!=p[i-1].first)
			cnt=1;
		ans[p[i].second]=cnt++;
	}
	cout << t[1] << endl;
	for (int i=0;i<n;++i)
		cout << ans[i] << " ";
}