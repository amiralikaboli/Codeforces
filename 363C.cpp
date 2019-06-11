#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	string ans="";
	if (s.size()<=2){
		cout << s;
		return 0;
	}
	ans+=s[0]+s[1];
	for (int i=2;i<s.size();++i){
		if (s[i]!=ans[ans.size()-1]){
			ans+=s[i];
			continue;
		}
		if (ans.size()==2 && s[i]!=ans[ans.size()-2])
				ans+=s[i];
		else if (s[i]!=ans[ans.size()-2] && ans[ans.size()-2]!=ans[ans.size()-3])
			ans+=s[i];
	}
	cout << ans;
}