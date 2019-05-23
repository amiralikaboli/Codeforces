#include <iostream>

using namespace std;

int main (){
	string s;
	cin >> s;
	int upper=0;
	int lower=0;
	for (int i=0;i<s.size();++i){
		if (s[i]>='A' && s[i]<='Z')
			++upper;
		if (s[i]>='a' && s[i]<='z')
			++lower;
	}
	if (lower>=upper)
		for (int i=0;i<s.size();++i){
			if (s[i]>='A' && s[i]<='Z')
				s[i]+='a'-'A';
			cout << char(s[i]);
		}
	else
		for (int i=0;i<s.size();++i){
			if (s[i]>='a' && s[i]<='z')
				s[i]+='A'-'a';
			cout << char(s[i]);
		}
}