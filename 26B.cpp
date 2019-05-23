#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int open=0;
	int ans=s.size();
	for (int i=0;i<s.size();++i)
		if (s[i]==')'){
			if (open==0)
				--ans;
			else
				--open;
		}
		else
			++open;
	ans-=open;
	cout << ans;
}