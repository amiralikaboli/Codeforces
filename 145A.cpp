#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	cin >> s >> t;
	int four=0,seven=0;
	for (int i=0;i<s.size();++i)
		if (s[i]!=t[i]){
			if (s[i]=='4')
				++four;
			if (s[i]=='7')
				++seven;
		}
	cout << max(four,seven);
}