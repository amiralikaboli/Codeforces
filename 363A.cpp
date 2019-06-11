#include <bits/stdc++.h>

using namespace std;

map <char,string> mp;

int main(){
	string s;
	cin >> s;
	reverse(s.begin(),s.end());
	mp['0']="O-|-OOOO";
	mp['1']="O-|O-OOO";
	mp['2']="O-|OO-OO";
	mp['3']="O-|OOO-O";
	mp['4']="O-|OOOO-";
	mp['5']="-O|-OOOO";
	mp['6']="-O|O-OOO";
	mp['7']="-O|OO-OO";
	mp['8']="-O|OOO-O";
	mp['9']="-O|OOOO-";
	for (int i=0;i<s.size();++i)
		cout << mp[s[i]] << endl;
}