#include <bits/stdc++.h>

using namespace std;

stack <char> stk;

bool isOpen(char c){
	return (c=='(' || c=='{' || c=='<' || c=='[');
}

char type(char c){
	if (c=='(' || c==')')
		return '!';
	if (c=='{' || c=='}')
		return '@';
	if (c=='<' || c=='>')
		return '#';
	if (c=='[' || c==']')
		return '$';
}

int main(){
	string s;
	cin >> s;
	int ans=0;
	for (int i=0;i<s.size();++i){
		if (isOpen(s[i]))
			stk.push(s[i]);
		else{
			if (stk.empty()){
				cout << "Impossible";
				return 0;
			}
			char c=stk.top();
			ans+=(type(c)!=type(s[i]));
			stk.pop();
		}
	}
	if (stk.empty())
		cout << ans;
	else
		cout << "Impossible";
}