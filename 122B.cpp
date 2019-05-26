#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int t_4=0,t_7=0;
	for (int i=0;i<s.size();++i)
		if (s[i]=='4')
			++t_4;
		else if (s[i]=='7')
			++t_7;
	if (max(t_4,t_7)==0)
		cout << -1;
	else if (t_4>=t_7)
		cout << 4;
	else
		cout << 7;
}