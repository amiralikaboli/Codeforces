#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	string ans="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	for (int i=0;i<n;++i){
		string t;
		cin >> t;
		if (t.find(s)==0 && t<ans)
			ans=t;
	}
	if (ans=="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz")
		cout << s;
	else
		cout << ans;
}