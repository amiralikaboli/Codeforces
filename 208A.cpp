#include <iostream>

using namespace std;

string s;

bool check(int ind){
	if (s[ind]=='W' && s[ind+1]=='U' && s[ind+2]=='B')
		return true;
	return false;
}

int main (){
	cin >> s;
	for (int i=0;i<s.size(); )
		if (check(i)==false){
			while (check(i)==false && i<s.size()){
				cout << s[i];
				++i;
			}
			cout << " ";
		}
		else
			i+=3;
}