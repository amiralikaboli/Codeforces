#include <bits/stdc++.h>

using namespace std;

int t[30];

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		++t[s[i]-'a'];
	int odd_num=0;
	for (int i=0;i<30;++i)
		odd_num+=t[i]%2;
	if (odd_num%2 || odd_num==0)
		cout << "First";
	else
		cout << "Second";
}