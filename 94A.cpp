#include <bits/stdc++.h>

using namespace std;

map <string,int> mp;

int main(){
	string s;
	cin >> s;
	for (int i=0;i<10;++i){
		string t;
		cin >> t;
		mp[t]=i;
	}
	for (int i=0;i<8;++i)
		cout << mp[s.substr(10*i,10)];
}