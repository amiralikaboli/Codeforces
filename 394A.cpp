#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int plus,equal;
	for (int i=0;i<s.size();++i)
		if (s[i]=='+')
			plus=i;
		else if (s[i]=='=')
			equal=i;
	int l1=plus;
	int l2=equal-plus-1;
	int r=s.size()-equal-1;
	if (l1+l2==r){
		cout << s;
		return 0;
	}
	else if (l1+l2>r+2 || r>l1+l2+2 || l1+l2==r+1 || l1+l2+1==r){
		cout << "Impossible";
		return 0;
	}
	if (l1+l2<r){
		for (int i=0;i<l1;++i)
			cout << "|";
		cout << "+";
		for (int i=0;i<l2+1;++i)
			cout << "|";
		cout << "=";
		for (int i=0;i<r-1;++i)
			cout << "|";
	}
	else{
		if (l1>1){
			for (int i=0;i<l1-1;++i)
				cout << "|";
			cout << "+";
			for (int i=0;i<l2;++i)
				cout << "|";
			cout << "=";
			for (int i=0;i<r+1;++i)
				cout << "|";
		}
		else{
			for (int i=0;i<l1;++i)
				cout << "|";
			cout << "+";
			for (int i=0;i<l2-1;++i)
				cout << "|";
			cout << "=";
			for (int i=0;i<r+1;++i)
				cout << "|";	
		}
	}
}