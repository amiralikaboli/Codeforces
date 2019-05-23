#include <bits/stdc++.h>

using namespace std;

int f[10];

int main(){
	string s;
	cin >> s;
	if (s.size()==1){
		cout << (s[0]!='0');
		return 0;
	}
	reverse(s.begin(),s.end());
	if (s[0]>='1')
		f[0]=2;
	else if (s[0]=='0')
		f[0]=1;
	for (int i=1;i<s.size();++i)
		if (s[i]>'1'){
			f[i]=(1<<(i+1));
			if (i==s.size()-1)
				--f[i];
		}
		else if (s[i]=='1'){
			f[i]=(1<<i)+f[i-1];
			if (i==s.size()-1)
				--f[i];
		}
		else
			f[i]=f[i-1];
	cout << f[s.size()-1];
}