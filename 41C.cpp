#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	bool at=false;
	cout << s[0];
	for (int i=1;i<s.size();++i)
		if (i<s.size()-3 && s[i]=='d' && s[i+1]=='o' && s[i+2]=='t'){
			cout << '.';
			i+=2;
		}
		else if (i<s.size()-1 && s[i]=='a' && s[i+1]=='t' && at==false){
			cout << '@';
			at=true;
			++i;
		}
		else
			cout << s[i];
}
//:-|