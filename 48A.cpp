#include <bits/stdc++.h>

using namespace std;

map <string,string> mp;

int main(){
	string f,m,s;
	cin >> f >> m >> s;
	mp["rock"]="scissors";
	mp["scissors"]="paper";
	mp["paper"]="rock";
	if (mp[f]==m && mp[f]==s)
		cout << "F";
	else if (mp[m]==f && mp[m]==s)
		cout << "M";
	else if (mp[s]==f && mp[s]==m)
		cout << "S";
	else
		cout << "?";
}