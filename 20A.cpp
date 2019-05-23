#include <bits/stdc++.h>

using namespace std;

vector <int> ind;

int main(){
	string s;
	cin >> s;
	int cnt=0;
	for (int i=1;i<s.size();++i)
		if (s[i-1]=='/' && s[i]>='a' && s[i]<='z')
			++cnt;
	if (cnt==0){
		cout << "/";
		return 0;
	}
	string ans="";
	int ind=0;
	for (int i=0;i<cnt;++i){
		ans+="/";
		while (s[ind]=='/')
			++ind;
		while (s[ind]>='a' && s[ind]<='z'){
			ans+=s[ind];
			++ind;
		}
	}
	cout << ans;
}