#include <bits/stdc++.h>

using namespace std;

map <int,int> mp;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (x!=0)
			++mp[x];
	}
	int ans=0;
	for (map<int,int>::iterator it=mp.begin();it!=mp.end();++it){
		if (it->second>2){
			cout << -1;
			return 0;
		}
		else if (it->second==2)
			++ans;
	}
	cout << ans;
}