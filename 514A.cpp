#include <iostream>
using namespace std;
int main (){
	string s;
	cin >> s;
	if (s[0]!='9'){
		s[0]=min (s[0]-'0','9'-s[0]);
		s[0]+='0';
	}
	for (int i=1;i<s.size ();++i)
		s[i]=min (s[i]-'0','9'-s[i]);
	for (int i=1;i<s.size ();++i)
		s[i]+='0';
	cout << s;
}
