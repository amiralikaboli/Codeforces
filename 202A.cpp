#include <bits/stdc++.h>

using namespace std;

int t[30];

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'a'];
	for (int i=30;i>=0;--i)
		if (t[i]){
			for (int j=0;j<t[i];++j)
				cout << char(i+'a');
			return 0;
		}
}