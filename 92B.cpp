#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	if (s=="1"){
		cout << 0;
		return 0;
	}
	reverse(s.begin(),s.end());
	int ans=s.size()-1;
	for (int i=0;i<s.size()-1;++i){
		if (s[i]=='1'){
			++ans;
			if (i<s.size()-1)
				++s[i+1];
		}
		if (s[i]=='2' && i<s.size()-1)
			++s[i+1];
	}
	if (s[s.size()-1]=='2')
		++ans;
	cout << ans;
}