#include <iostream>

using namespace std;

int t[30],t12[30];

int main(){
	string s,s1,s2;
	cin >> s1 >> s2 >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'A'];
	for (int i=0;i<s1.size();++i)
		++t12[s1[i]-'A'];
	for (int i=0;i<s2.size();++i)
		++t12[s2[i]-'A'];
	for (int i=0;i<26;++i)
		if (t[i]!=t12[i]){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}