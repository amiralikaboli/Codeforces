#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	++s[s.size()-1];
	for(int i=s.size()-1;i>=0;--i)
		if(s[i]>'z'){
			s[i]='a';
			++s[i-1];
		}
	if(s==t)
		cout << "No such string" << endl;
	else
		cout << s << endl;
	return 0;
}
