#include <bits/stdc++.h>

using namespace std;

bool cmp(char a,char b){
	return a>b;
}

int main(){
	string s,digit;
	cin >> s >> digit;
	sort(digit.begin(),digit.end(),cmp);
	int ind=0;
	for (int i=0;i<s.size();++i)
		if (ind<digit.size() && s[i]<digit[ind])
			s[i]=digit[ind++];
	cout << s;
}