#include <bits/stdc++.h>

using namespace std;

string s[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

int main(){
	string month;
	cin >> month;
	int k;
	cin >> k;
	for (int i=0;i<12;++i)
		if (s[i]==month)
			cout << s[(i+k)%12];
}