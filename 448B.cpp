#include <bits/stdc++.h>

using namespace std;

int ted_s[30],ted_t[30];

int main(){
	string s,t;
	cin >> s >> t;
	for (int i=0;i<s.size();++i)
		++ted_s[s[i]-'a'];
	for (int i=0;i<t.size();++i)
		++ted_t[t[i]-'a'];
	for (int i=0;i<30;++i)
		if (ted_s[i]<ted_t[i]){
			cout << "need tree";
			return 0;
		}
	if (s.size()==t.size()){
		cout << "array";
		return 0;
	}
	int ind=0;
	for (int i=0;i<s.size();++i)
		if (s[i]==t[ind])
			++ind;
	if (ind==t.size()){
		cout << "automaton";
		return 0;
	}
	cout << "both";
}