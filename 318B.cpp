#include <bits/stdc++.h>

using namespace std;

#define int long long

vector <int> h,m;

int32_t main(){
	string s;
	cin >> s;
	string heavy="heavy";
	string metal="metal";
	if (s.size()<5){
		cout << 0;
		return 0;
	}
	for (int i=0;i<s.size()-4;++i){
		if (s.substr(i,5)==heavy)
			h.push_back(i);
		if (s.substr(i,5)==metal)
			m.push_back(i);
	}
	int ans=0;
	for (int i=0;i<h.size();++i){
		int ind=lower_bound(m.begin(),m.end(),h[i]+5)-m.begin();
		ans+=m.size()-ind;
	}
	cout << ans;
}