#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		if (s[i]=='r')
			cout << i+1 << '\n';
	for (int i=s.size()-1;i>=0;--i)
		if (s[i]=='l')
			cout << i+1 << '\n';
}