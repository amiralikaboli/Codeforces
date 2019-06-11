#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	string t;
	cin >> t;
	int ind;
	for (int i=0;i<s.size();++i)
		if (s[i]=='|')
			ind=i;
	int l1=ind,l2=s.size()-ind-1;
	if ((l1+l2)%2!=t.size()%2){
		cout << "Impossible";
		return 0;
	}
	if (max(l1,l2)>min(l1,l2)+t.size()){
		cout << "Impossible";
		return 0;
	}
	int x=l1+l2+t.size();
	x/=2;
	for (int i=0;i<ind;++i)
		cout << s[i];
	for (int i=0;i<x-l1;++i)
		cout << t[i];
	cout << '|';
	for (int i=ind+1;i<s.size();++i)
		cout << s[i];
	for (int i=x-l1;i<t.size();++i)
		cout << t[i];
}