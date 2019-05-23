#include <iostream>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	for (int i=0;i<s.size();++i)
		s[i]+=t[i]-'0';
	for (int i=0;i<s.size();++i)
		if (s[i]=='1')
			cout << 1;
		else
			cout << 0;
}