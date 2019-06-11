#include <iostream>

using namespace std;

int main (){
	string s;
	cin >> s;
	int x;
	if (s.size()==1){
		x=s[0]-'0';
		x%=4;
	}
	else{
		x=(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');
		x%=4;
	}
	if (x==0)
		cout << 4;
	else
		cout << 0;
}