#include <bits/stdc++.h>

using namespace std;

int t[30];

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'a'];
	int ans=min(--t['n'-'a']/2,min(t['i'-'a'],min(t['e'-'a']/3,t['t'-'a'])));
	cout << ans;
}