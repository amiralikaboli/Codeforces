#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	bool a=false;
	for (int i=0;i<s.size();++i)
		if (s[i]!='0'){
			a=true;
			s=s.substr(i,s.size()-i);
			break;
		}
	bool b=false;
	for (int i=0;i<t.size();++i)
		if (t[i]!='0'){
			b=true;
			t=t.substr(i,t.size()-i);
			break;
		}
	if (a==false && b==false){
		cout << "=";
		return 0;
	}
	if (a==false){
		cout << "<";
		return 0;
	}
	if (b==false){
		cout << ">";
		return 0;
	}
	if (s.size()>t.size()){
		cout << ">";
		return 0;
	}
	if (s.size()<t.size()){
		cout << "<";
		return 0;
	}
	for (int i=0;i<s.size();++i)
		if (s[i]>t[i]){
			cout << ">";
			return 0;
		}
		else if (s[i]<t[i]){
			cout << "<";
			return 0;
		}
	cout << "=";
}