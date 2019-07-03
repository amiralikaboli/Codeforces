#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	for (int i=0;i<s.size();++i)
		s[i]-='0';
	for (int i=0;i<s.size();++i)
		if (s[i]==0 || s[i]==8){
			cout << "YES" << endl << int(s[i]);
			return 0;
		}
	for (int i=0;i<s.size();++i)
		for (int j=i+1;j<s.size();++j)
			if ((s[i]*10+s[j])%8==0){
				cout << "YES" << endl << int(s[i]) << int(s[j]);
				return 0;
			}
	for (int i=0;i<s.size();++i)
		for (int j=i+1;j<s.size();++j)
			for (int l=j+1;l<s.size();++l)
				if ((s[i]*100+s[j]*10+s[l])%8==0){
					cout << "YES" << endl << int(s[i]) << int(s[j]) << int(s[l]);
					return 0;
				}
	cout << "NO";
}