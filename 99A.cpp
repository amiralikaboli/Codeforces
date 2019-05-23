#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int ind=-1;
	for (int i=0;i<s.size();++i)
		if (s[i]=='.')
			ind=i;
	if (s[ind-1]=='9'){
		cout << "GOTO Vasilisa.";
		return 0;
	}
	string nim="5";
	for (int i=ind+2;i<s.size();++i)
		nim+="0";
	if (s.substr(ind+1,s.size()-ind-1)>=nim)
		++s[ind-1];
	s=s.substr(0,ind);
	cout << s;
}