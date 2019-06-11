#include <iostream>
using namespace std;
int main (){
	string s;
	bool q=true;
	cin >> s;
	if (s[0]!='1')
		q=false;
	if (s[s.size ()-1]!='1' && s[s.size ()-1]!='4')
		q=false;
	for (int i=1;i<s.size ()-1;++i){
		if (s[i]!='1' && s[i]!='4')
			q=false;
		if (s[i]=='4' && s[i-1]+s[i+1]-'0'=='8')
			q=false;
	}
	if (q==true)
		cout << "YES";
	else
		cout << "NO";
}
