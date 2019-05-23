#include <bits/stdc++.h>

using namespace std;

map <char,int> t1,t2;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for (int i=0;i<s1.size();++i)
		if (s1[i]!=' ')
			++t1[s1[i]];
	for (int i=0;i<s2.size();++i)
		if (s2[i]!=' ')
			++t2[s2[i]];
	for (int i=0;i<30;++i)
		if (t1[i+'a']<t2[i+'a']){
			cout << "NO";
			return 0;
		}
	for (int i=0;i<30;++i)
		if (t1[i+'A']<t2[i+'A']){
			cout << "NO";
			return 0;
		}
	cout << "YES";
}