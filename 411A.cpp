#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	bool num=false,ll=false,sl=false,len=(s.size()>=5);
	for (int i=0;i<s.size();++i){
		if (s[i]>='0' && s[i]<='9')
			num=true;
		if (s[i]>='A' && s[i]<='Z')
			ll=true;
		if (s[i]>='a' && s[i]<='z')
			sl=true;
	}
	if (num*sl*ll*len==1)
		cout << "Correct";
	else
		cout << "Too weak";
}