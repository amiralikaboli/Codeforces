#include <bits/stdc++.h>

using namespace std;

#define int long long

pair <int,int> p[15];

bool cmp(pair <int,int> a,pair <int,int> b){
	if (a.first==b.first)
		return a.second>b.second;
	return a.first<b.first;
}

int32_t main(){
	int v;
	cin >> v;
	for (int i=0;i<9;++i){
		cin >> p[i].first;
		p[i].second=i+1;
	}
	sort(p,p+9,cmp);
	if (v<p[0].first){
		cout << -1;
		return 0;
	}
	string ans="";
	for (int i=0;i<v/p[0].first;++i)
		ans+=p[0].second+'0';
	cerr << ans << endl;
	v%=p[0].first;
	int ind=0;
	while (v>0 && ind<ans.size()){
		int cnt=0;
		for (int i=1;i<9;++i)
			if (p[i].first<=v+p[0].first && p[i].second>p[cnt].second)
				cnt=i;
		ans[ind]=p[cnt].second+'0';
		v-=p[cnt].first-p[0].first;
		++ind;
	}
	cout << ans;
}