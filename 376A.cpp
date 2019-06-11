#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	long long p;
	for (long long i=0;i<s.size();++i)
		if (s[i]=='^')
			p=i;
	long long l=0,r=0;
	for (long long i=p-1;i>=0;--i)
		if (s[i]>='0' && s[i]<='9')
			l+=(s[i]-'0')*(p-i);
	for (long long i=p+1;i<s.size();++i)
		if (s[i]>='0' && s[i]<='9')
			r+=(s[i]-'0')*(i-p);
	if (r==l)
		cout << "balance";
	else if (r<l)
		cout << "left";
	else
		cout << "right";
}