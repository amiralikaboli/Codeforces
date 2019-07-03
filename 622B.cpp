#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int k;
	cin >> k;
	int hour=(s[0]-'0')*10+(s[1]-'0');
	int min=(s[3]-'0')*10+(s[4]-'0');
	int hash=hour*60+min;
	hash+=k;
	if ((hash/60)%24<10)
		cout << 0 << (hash/60)%24;
	else
		cout << (hash/60)%24;
	cout << ":";
	if (hash%60<10)
		cout << 0 << hash%60;
	else
		cout << hash%60;
}