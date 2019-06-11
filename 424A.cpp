#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;
	int big=0,small=0;
	for (int i=0;i<n;++i)
		if (s[i]=='X')
			++big;
		else
			++small;
	int t=0;
	for (int i=0;i<n;++i)
		if (small<big && s[i]=='X'){
			s[i]='x';
			--big;
			++small;
			++t;
		}
		else if (small>big && s[i]=='x'){
			s[i]='X';
			--small;
			++big;
			++t;
		}
	cout << t << "\n" << s;
}