#include <bits/stdc++.h>

using namespace std;

int t[5];

int main(){
	string s;
	for (int i=0;i<3;++i){
		getline(cin,s);
		for (int j=0;j<s.size();++j)
			if (s[j]=='a')
				++t[i];
			else if (s[j]=='e')
				++t[i];
			else if (s[j]=='i')
				++t[i];
			else if (s[j]=='o')
				++t[i];
			else if (s[j]=='u')
				++t[i];
	}
	if (t[0]==5 && t[1]==7 && t[2]==5)
		cout << "YES";
	else
		cout << "NO";
}