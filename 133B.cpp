#include <bits/stdc++.h>

using namespace std;

const int MOD=1000*1000+3;
map <char,int> mp;

int main(){
	string s;
	cin >> s;
	mp['>']=8;
	mp['<']=9;
	mp['+']=10;
	mp['-']=11;
	mp['.']=12;
	mp[',']=13;
	mp['[']=14;
	mp[']']=15;
	int ans=0;
	for (int i=0;i<s.size();++i){
		ans*=16;
		ans+=mp[s[i]];
		ans%=MOD;
	}
	cout << ans;
}