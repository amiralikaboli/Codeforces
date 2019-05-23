#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	if (s==t && s=="0"){
		cout << "OK";
		return 0;
	}
	if (s.size()!=t.size()){
		cout << "WRONG_ANSWER";
		return 0;
	}
	for (int i=1;i<s.size();++i)
		if (t[i]<t[i-1] && t[i]!='0'){
			cout << "WRONG_ANSWER";
			return 0;
		}
	if (t[0]=='0'){
		cout << "WRONG_ANSWER";
		return 0;
	}
	int z=0;
	for (int i=0;i<s.size();++i)
		if (s[i]=='0')
			++z;
	if (z!=0){
		int ind=1;
		while (t[ind]=='0')
			++ind;
		if (ind-1!=z){
			cout << "WRONG_ANSWER";
			return 0;
		}
	}
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	for (int i=0;i<s.size();++i)
		if (s[i]!=t[i]){
			cout << "WRONG_ANSWER";
			return 0;
		}
	cout << "OK";
}