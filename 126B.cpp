#include <bits/stdc++.h>

using namespace std;

const int MaxS=1E6+10;
int p[MaxS];

int main(){
	string s;
	cin >> s;
	int n=s.size();
	int l=p[1]=0;
	for (int i=2;i<=n;++i){
		while (l>0 && s[l]!=s[i-1])
			l=p[l];
		if (s[l]==s[i-1])
			++l;
		p[i]=l;
	}
	l=p[n];
	int mx=0;
	mx=*max_element(p+1,p+n);
	while (mx<l)
		l=p[l];
	if (l==0)
		cout << "Just a legend";
	else
		cout << s.substr(0,l) << endl;
}