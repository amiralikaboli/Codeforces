#include <iostream>
#include <cmath>

using namespace std;

void hour(int h){
	if (h==0)
		cout << "00";
	else if (floor(log10(h))==0)
		cout << "0" << h;
	else
		cout << h;
}

void minute(int m){
	if (m==0)
		cout << "00";
	else if (floor(log10(m))==0)
		cout << "0" << m;
	else
		cout << m;
}

int main (){
	string s,t;
	cin >> s >> t;
	int hs=(s[0]-'0')*10+(s[1]-'0');
	int ht=(t[0]-'0')*10+(t[1]-'0');
	int ms=(s[3]-'0')*10+(s[4]-'0');
	int mt=(t[3]-'0')*10+(t[4]-'0');
	if (ms<mt){
		ms+=60;
		--hs;
	}
	if (hs<ht)
		hs+=24;
	hour(hs-ht);
	cout << ":";
	minute(ms-mt);
}