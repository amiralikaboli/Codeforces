#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

map <int,int> mp;
vector <pii> ans;

int main(){
	ios::sync_with_stdio(false);
	ans.push_back(pii(0,0));
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int kind;
		cin >> kind;
		++mp[kind];
		if (mp[kind]>=2){
			ans.push_back(pii(ans.back().second+1,i+1));
			mp.clear();
		}
	}
	ans.back().second=n;
	if (ans.size()==1){
		cout << -1;
		return 0;
	}
	cout << ans.size()-1 << endl;
	for (int i=1;i<ans.size();++i)
		cout << ans[i].first << " " << ans[i].second << endl;
}