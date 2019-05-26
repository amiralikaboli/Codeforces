#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int ind;
	if (s[0]=='f'){
		cout << "ftp://";
		ind=3;
	}
	else{
		ind=4;
		cout << "http://";
	}
	for (int i=s.size()-2;i>=ind;--i)
		if (s[i]=='r' && s[i+1]=='u'){
			string domain=s.substr(ind,i-ind);
			string context="/"+s.substr(i+2,s.size()-i-2);
			cout << domain << ".ru";
			if (context.size()>1)
				cout << context;
			return 0;
		}
}