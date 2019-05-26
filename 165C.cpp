#include <bits/stdc++.h>

using namespace std;

#define int long long

vector <int> v;

int32_t main(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	v.push_back(-1);
	for(int i=0;i<s.size();++i)
		if(s[i]=='1')
			v.push_back(i);
	v.push_back(s.size());
	int ans=0;
	if(k==0){
		int t;
		for (int i=1;i<v.size();++i){
			t=v[i]-v[i-1]-1;
			ans+=t*(t+1)/2;
		}
		cout << ans; 
		return 0;
	}
	if(v.size()-2<k){
		cout << 0 << endl;
		return 0;
	}
	for(int i=k;i<v.size()-1;++i)
		ans+=(v[i+1]-v[i])*(v[i-k+1]-v[i-k]);
	cout << ans;
}
