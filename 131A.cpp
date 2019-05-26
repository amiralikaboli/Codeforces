#include <iostream>

using namespace std;

int main (){
	string s;
	cin >> s;
	int cnt=0;
	for (int i=0;i<s.size();++i)
		if (s[i]>='A' && s[i]<='Z')
			++cnt;
	if (cnt==s.size())
		for (int i=0;i<s.size();++i)
			cout << char('a'+s[i]-'A');
	else if (cnt==s.size()-1 && s[0]>='a' && s[0]<='z'){
		cout << char('A'+s[0]-'a');
		for (int i=1;i<s.size();++i)
			cout << char('a'+s[i]-'A');
	}
	else
		cout << s;
}