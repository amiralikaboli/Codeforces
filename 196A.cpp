#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int ind=0;
	for (int i=25;i>=0;--i)
		for (int j=ind;j<s.size();++j)
			if (s[j]=='a'+i){
				cout << s[j];
				ind=j;
			}
}