#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double hour=(s[0]-'0')*10+(s[1]-'0');
	double min=(s[3]-'0')*10+(s[4]-'0');
	if (hour>=12)
		hour-=12;
	cout << setprecision(15) << hour*30+min/2 << " " << min*6;
}